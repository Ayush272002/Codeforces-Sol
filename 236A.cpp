#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;

    set<char> st(name.begin(), name.end());
    if (st.size() & 1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }

    return 0;
}