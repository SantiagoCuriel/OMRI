#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
lli n,k,izq,der,l;
lli pregunta(lli p){
    lli x,t=0;
    x=p;
    while (x>0){
        t+=x%10;
        x/=10;
    }
    p=p-t;
    if (p>=k){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    izq=-1;
    der=n+1;
    while (izq+1<der){
        lli mid=(izq+der)/2;
        l=pregunta(mid);
        if (l){
            der=mid;
        }else{
            izq=mid;
        }
    }
    cout << n-der+1;
    return 0;
}
