#include <bits/stdc++.h>
using namespace std;
using ll = long long;

unordered_map<string, ll> memo;

ll solve(const string &s, ll count)
{
    if (s.empty())
        return LLONG_MAX;

    ll num = stoll(s);
    if (num % 25 == 0)
        return count;

    if (memo.count(s))
        return memo[s] + count;

    ll ans = LLONG_MAX;
    for (int i = 0; i < s.size(); i++)
    {
        string curr = s.substr(0, i) + s.substr(i + 1);
        if (!curr.empty())
        {
            ans = min(ans, solve(curr, count + 1));
        }
    }

    memo[s] = ans - count;
    return ans;
}

int minDel(const string &s)
{
    vector<string> endings = {"00", "25", "50", "75"};
    int n = s.size();
    int ans = INT_MAX;

    for (auto &end : endings)
    {
        int pos = n - 1;
        int need = 1;

        while (pos >= 0 && s[pos] != end[1])
            pos--;

        if (pos < 0)
            continue;

        int pos2 = pos - 1;
        while (pos2 >= 0 && s[pos2] != end[0])
            pos2--;

        if (pos2 < 0)
            continue;

        int deletions = (n - 1 - pos) + (pos - 1 - pos2);
        ans = min(ans, deletions);
    }

    return ans == INT_MAX ? n : ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        memo.clear();
        string s = to_string(n);
        // ll ans = solve(s, 0);
        ll ans = minDel(s);
        cout << ans << endl;
    }

    return 0;
}