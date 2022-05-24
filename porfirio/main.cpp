#include <bits/stdc++.h>

using namespace std;

long long int n,padre[100010],tam[100010],res;
struct ura{
    int u,v,p;
};
ura arre[300010];
bool compara(ura a,ura b){
    if (a.p<b.p){
        return true;
    }
    return false;
}int parent(int u){
    while (u!=padre[u]){
        padre[u]=padre[padre[u]];
        u=padre[u];
    }
    return u;
}
void unir(int u, int v){
    u=parent(u);
    v=parent(v);
    if (u!=v){
        if (tam[u]>tam[v]){
            padre[v]=u;
            tam[u]+=tam[v];
        }else{
            padre[u]=v;
            tam[v]+=tam[u];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=1; i<n; i++){
        int u,v,p;
        cin >> u >> v >> p;
        arre[i].u=u;
        arre[i].v=v;
        arre[i].p=p;
    }
    for (int i=1; i<=n; i++){
        tam[i]=1;
        padre[i]=i;
    }
    sort(arre+1,arre+n,compara);
    for (int i=1; i<n; i++){
        if (parent(arre[i].u)!=parent(arre[i].v)){
            res+=(tam[parent(arre[i].u)]*tam[parent(arre[i].v)]%1000000007)*arre[i].p%1000000007;
            unir(arre[i].u,arre[i].v);
        }
    }
    cout << res%1000000007;
    return 0;
}
