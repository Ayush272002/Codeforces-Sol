#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(ll a, ll b, ll k)
{
    ll g = gcd(a, b);
    return a / g <= k && b / g <= k ? 1 : 2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        cout << solve(a, b, k) << endl;
    }

    return 0;
}