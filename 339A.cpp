#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.size() == 1)
    {
        cout << s;
        return 0;
    }

    vector<int> str;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] != '+')
        {
            str.push_back(s[i] - '0');
        }
    }

    sort(str.begin(), str.end());
    string ans;
    for (int i = 0; i < str.size(); ++i)
    {
        ans.push_back(str[i] + '0');
        ans.push_back('+');
    }

    ans.pop_back();
    cout << ans;

    return 0;
}