#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isSorted(vector<ll> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }

    return true;
}

void solve(vector<ll> &arr, int n, int k)
{
    if (k <= 1 && !isSorted(arr))
        cout << "No\n";
    else
        cout << "Yes\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        solve(arr, n, k);
    }

    return 0;
}