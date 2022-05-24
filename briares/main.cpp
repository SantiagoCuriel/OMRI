#include <bits/stdc++.h>

using namespace std;

long long int n,arre[100010],k,act,res,cambio;
bool compara(long long int u,long long int v){
    return v<u;
}
int main()
{
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    sort(arre+1,arre+n+1,compara);
    long long int it=k-1;
    for (int i=1; i<=k; i++){
        act+=arre[i]*it;
        it-=2;
        if (i!=1){
            cambio+=arre[i]*2;
        }
    }
    res=act;
    int izq=2,der=k+1;
    while (der<=n){
        act-=arre[izq-1]*(k-1);
        act-=arre[der]*(k-1);
        act+=cambio;
        cambio-=arre[izq]*2;
        cambio+=arre[der]*2;
        res=min(res,act);
        der++;
        izq++;
    }
    cout << res;
    return 0;
}
