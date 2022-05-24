#include <bits/stdc++.h>

using namespace std;

int n,arre[100010],res;
bool compara(int u, int v){
    if (v<u){
        return 1;
    }
    return 0;
}
int cajas(int x){
    for (int i=1; i<=x; i++){
        int resist=arre[i];
        for (int j=i+x; j<=n; j+=x){
            resist--;
            resist=min(resist,arre[j]);
            if (resist==-1){
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    sort(arre+1,arre+n+1,compara);
    int izq=0,der=n;
    while (izq+1<der){
        int mid=(izq+der)/2;
        int l=cajas(mid);
        if (l){
            der=mid;
        }else{
            izq=mid;
        }
    }
    cout << der;
    return 0;
}
