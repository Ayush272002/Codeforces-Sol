#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<long long> &arr)
{
    if (!arr.size())
        return 0;

    long long sum = 0;
    long long maxi = LLONG_MIN;

    for (long long i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        maxi = max(maxi, sum);
        if (sum < 0)
            sum = 0;
    }

    return maxi;
}

void solve()
{
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (auto &i : a)
        cin >> i;

    long long x = 0;
    long long idx = -1;

    for (long long i = 0; i < n; i++)
    {
        if (a[i] != -1 && a[i] != 1)
        {
            x = a[i];
            idx = i;
        }
    }

    set<long long> lsuf, rpref;
    set<long long> ans;
    lsuf.insert(0);
    rpref.insert(0);

    if (idx != -1)
    {
        long long sum = 0;
        for (long long i = idx + 1; i < n; i++)
        {
            sum += a[i];
            rpref.insert(sum);
        }

        sum = 0;
        for (int i = idx - 1; i >= 0; i--)
        {
            sum += a[i];
            lsuf.insert(sum);
        }

        long long l1 = (*(lsuf.begin()) + (*(rpref.begin()))) + x;
        long long r1 = (*(lsuf.rbegin()) + (*(rpref.rbegin()))) + x;

        vector<long long> v1, v2, v3, v4;
        for (int i = 0; i < idx; i++)
        {
            v1.push_back(a[i]);
            v2.push_back(-1LL * a[i]);
        }

        for (int i = idx + 1; i < n; i++)
        {
            v3.push_back(a[i]);
            v4.push_back(-1LL * a[i]);
        }

        long long r2 = maxSubarraySum(v1);
        long long l2 = -1LL * maxSubarraySum(v2);

        long long r3 = maxSubarraySum(v3);
        long long l3 = -1LL * maxSubarraySum(v4);

        for (long long i = l1; i <= r1; i++)
            ans.insert(i);

        for (long long i = l2; i <= r2; i++)
            ans.insert(i);

        for (long long i = l3; i <= r3; i++)
            ans.insert(i);

        ans.insert(0);
        cout << ans.size() << endl;

        for (auto i : ans)
            cout << i << " ";

        cout << endl;
    }
    else
    {
        long long l1 = maxSubarraySum(a);
        for (auto &i : a)
            i = -i;
        long long r1 = -1LL * maxSubarraySum(a);
        for (long long i = r1; i <= l1; i++)
            ans.insert(i);

        ans.insert(0);

        cout << ans.size() << endl;
        for (auto i : ans)
            cout << i << " ";

        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}