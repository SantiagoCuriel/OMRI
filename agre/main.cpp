#include <bits/stdc++.h>

using namespace std;

int n,p,a[10010],l,izq,der;
int prueba(int x){
    int ultimo=a[1],program=1;
    for (int i=2; i<=n; i++){
        if (a[i]>=ultimo+x){
            program++;
            ultimo=a[i];
        }
        if (program==p){
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
        l=prueba(mid);
        if (l){
            izq=mid;
        }else{
            der=mid;
        }
    }
    cout << izq;
    return 0;
}
