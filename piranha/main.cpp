#include <bits/stdc++.h>

using namespace std;
long long int n,t,a[300010],act=1,l,res;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n; i++){
            cin >> a[i];
            if (a[i]==a[i-1]){
                l++;
            }
            if (a[i]>=a[act]){
                if (a[i]!=a[i-1]){
                    act=i;
                }
            }
        }
        l++;
        if (l==n){
            cout << -1 << '\n';
        }else{
            if (act==1 && a[act]==a[act+1]){
                for (int i=2; i<=n; i++){
                    if (a[i]==a[act] && a[i]>a[i+1]){
                        act=i;
                        break;
                    }
                }
            }
            cout << act << '\n';
        }
        act=0;
        l=0;

    }
    return 0;
}
