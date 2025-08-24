#include <bits/stdc++.h>
using namespace std;

int solve(const string &s)
{
    int empty = 0;
    bool three = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.' && i + 1 < s.size() && s[i + 1] == '.' && i + 2 < s.size() && s[i + 2] == '.')
        {
            three = true;
            break;
        }

        if (s[i] == '.')
            empty++;
    }

    return three ? 2 : empty;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << solve(s) << endl;
    }

    return 0;
}

