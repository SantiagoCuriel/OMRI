#include <bits/stdc++.h>

using namespace std;

int t,n,par;
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n*2; i++){
            int a;
            cin >> a;
            if (!a%2){
                par++;
            }
        }
        if (par==n){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}
