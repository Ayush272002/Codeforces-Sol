#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int total = 0;
        if (m >= a)
            total += a;
        else
            total += m;

        if (m >= b)
            total += b;
        else
            total += m;

        int left = 2 * m - total;
        if(left >= c)
            total += c;
        else
            total += left;

        cout << total << endl;
    }

    return 0;
}