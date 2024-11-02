#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        while (n--)
        {
            int x;
            cin >> x;
            sum += x;
        }

        long long root = sqrt(sum);
        if (root * root == sum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}