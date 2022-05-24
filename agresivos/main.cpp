#include <bits/stdc++.h>

using namespace std;

int n,p,izq,der,mid,l=1,t=1,a[100010];
int verifica(int regla){
    int ultimo=a[1],insertados=1;
    for (int i=2; i<=n; i++){
        if (a[i]>=ultimo+regla){
            insertados++;
            ultimo=a[i];
        }
        if (insertados==p){
            return 1;
        }
    }
    return 0;
}
int main()
{
    cin >> n >> p;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    izq=1;
    der=a[n];
    while (izq+1<der){
        int mid=(izq+der)/2;
        int pregunta=verifica(mid);
        if (!pregunta){
            der=mid;
        }else{
            izq=mid;
        }
    }

    cout << izq;
    return 0;
}
