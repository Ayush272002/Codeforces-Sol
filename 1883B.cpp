#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(ll n, ll k, string &s)
{
    vector<int> count(26, 0);
    for (int i = 0; i < n; i++)
        count[s[i] - 'a']++;

    int numOdds = 0;

    for (int i = 0; i < count.size(); i++)
    {
        if (count[i] % 2 != 0)
            numOdds++;
    }

    numOdds - k <= 1 ? cout << "Yes\n" : cout << "No\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        solve(n, k, s);
    }

    return 0;
}