#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int count = 0;
        for (int i = 1; i <= n; i++){
            int a = i;
            int b = n - i;
            if(a > 0 && b > 0)
                count++;
        }

        cout << count << endl;
    }
}