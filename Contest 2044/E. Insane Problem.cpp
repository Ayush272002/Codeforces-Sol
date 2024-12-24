#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        long long count = 0, u = 1;

        while(u <= 1e9){
            count += max(min(r2 / u, r1) - max((l2 + u - 1) / u, l1) + 1, 0LL);
            u *= k;
        }

        cout << count << endl;
    }
    return 0;
}