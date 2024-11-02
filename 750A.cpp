#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int initialTime = 4 * 60 - k;
    // int ans = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     initialTime -= 5 * i;

    //     if (initialTime >= 0)
    //         ans++;

    //     else
    //         break;
    // }

    // cout << ans;
    // return 0;

    int left = 0, right = n;

    while (left < right)
    {
        int mid = left + (right - left + 1) / 2;

        int time = initialTime - (5 * (mid * (mid + 1) / 2));

        if (time >= 0)
            left = mid;
        else
            right = mid - 1;
    }

    cout << left;
    return 0;
}