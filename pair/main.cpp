#include <bits/stdc++.h>

using namespace std;

long long int n,t,a[200010],l,r,res,act,c[200010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n >> l >> r;
        for (int i=1; i<=n; i++){
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        for (int i=1; i<n; i++){
            long long int izq=i,der=n+1;
            while (izq+1<der){
                long long int mid=(izq+der)/2;
                if (a[i]+a[mid]>=l){
                    der=mid;
                }else{
                    izq=mid;
                }
            }
            act=der;
            izq=i;
            der=n+1;
            while (izq+1<der){
                long long int mid=(izq+der)/2;
                if (a[i]+a[mid]<=r){
                    izq=mid;
                }else{
                    der=mid;
                }
            }
            cout << izq << " " << act << "\n";
            res+=max(izq-act+1LL,0LL);
            act=0;
        }
        cout << res << '\n';
        res=0;
    }
    return 0;
}
