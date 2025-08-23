#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int n, int x)
{
    int maxD = 0;
    arr.insert(arr.begin(), 0);
    for (int i = 1; i < arr.size(); i++)
    {
        int diff = arr[i] - arr[i - 1];
        maxD = max(maxD, diff);
    }

    cout << max(maxD, 2 * (x - arr.back())) << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >>
                arr[i];

        solve(arr, n, x);
    }

    return 0;
}