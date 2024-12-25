#include <bits/stdc++.h>
#define ll long long
#define int long long
#define pb push_back
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void solve()
{
    ll l, r, g;
    cin >> l >> r >> g;

    ll l1 = (l + g - 1) / g; // ceil value
    ll r1 = (r / g);

    if (l1 == r1)
    {
        if (l1 == 1)
        {
            cout << g << " " << g << endl;
            return;
        }

        cout << -1 << " -1" << endl;
        return;
    }

    ll maxD = 0;
    ll ii, jj;
    bool f = false;

    for (ll i = l1; i <= min(l1 + 200, r1); i++)
    {
        for (ll j = r1; j >= max(l1, i); j--)
        {
            if (gcd(i, j) == 1)
            {
                if (maxD < (j - i + 1))
                {
                    maxD = j - i + 1;
                    ii = i;
                    jj = j;
                    f = true;
                }

                break;
            }
        }
    }

    if (f)
        cout << g * ii << " " << g * jj << endl;
    else
        cout << "-1 -1" << endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
