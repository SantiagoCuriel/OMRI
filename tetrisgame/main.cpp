#include <bits/stdc++.h>

using namespace std;

int t,n,p,ip,l;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n; i++){
            cin >> l;
            if (l%2){
                ip++;
            }else{
                p++;
            }
        }
        if (p==n || ip==n){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
        p=0;
        ip=0;
    }
    return 0;
}
