#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long count = 1;

        while (n > 3)
        {
            n = ceil(n / 4);
            count *= 2;
        }

        cout << count << endl;
    }

    return 0;
}