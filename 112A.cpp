#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);

    if (s1 == s2)
        cout << 0;
    else
    {
        int count1 = 0, count2 = 0;
        for (int i = 0; i < s1.size(); ++i)
        {
            if (int(s1[i]) > int(s2[i]))
            {
                cout << 1;
                break;
            }
            else if (int(s1[i]) < int(s2[i]))
            {
                cout << -1;
                break;
            }
        }
    }

    return 0;
}