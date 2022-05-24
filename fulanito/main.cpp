#include <bits/stdc++.h>

using namespace std;

int n,q,g,a[100010],l,izq,der,autos,litros;
long long int s[100010];
int pregunta(long long int x){
    if (g>=x){
        return 1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> q >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        s[i]=a[i]+s[i-1];
    }
    while (q--){
        izq=0;
        der=n+1;
        cin >> g;
        while (izq+1<der){
            int mid=(izq+der)/2;
            l=pregunta(s[mid]);
            if (l){
                izq=mid;
            }else{
                der=mid;
            }
        }
        cout << izq << " " << g-s[izq] << '\n';
    }

    return 0;
}
