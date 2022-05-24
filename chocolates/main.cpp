#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
lli n,a[100010],l,izq,der;
int pregunta(lli x){
    lli act=0;
    for (int i=1; i<=n; i++){
        act=a[i]+act-x;
        if (act<0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    izq=1;
    der=a[1]+1;
    while (izq+1<der){
        lli mid=(izq+der)/2;
        l=pregunta(mid);
        if (l){
            izq=mid;
        }else{
            der=mid;
        }
    }
    cout << izq;
    return 0;
}
