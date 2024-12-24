#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        set<long long> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(i + 1);
        }

        for (int i = 0; i < n; i++)
        {
            if (st.find(a[i]) != st.end())
            {
                cout << a[i] << " ";
                st.erase(a[i]);
            }
            else
            {
                cout << *st.begin() << " ";
                st.erase(st.begin());
            }
        }

        cout << endl;
    }

    return 0;
}