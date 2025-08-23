#include <bits/stdc++.h>
using namespace std;

string solve(const string &s)
{
    string ans = "";

    istringstream iss(s);
    string word;

    while (iss >> word)
        ans += word[0];

    return ans;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        cout << solve(s) << endl;
    }

    return 0;
}