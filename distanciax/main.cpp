#include <bits/stdc++.h>

using namespace std;

long long int n,m,padre[100010],tam[100010],x;
long long int res;
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
    cin >> n >> m >> x;
    for (int i=1; i<=m; i++){
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
    sort(arre+1,arre+m+1,compara);
    for (int i=1; i<=m; i++){
        if (arre[i].p==x){
            if (parent(arre[i].u)!=parent(arre[i].v)){
                res+=tam[parent(arre[i].u)]*tam[parent(arre[i].v)];
                unir(arre[i].u,arre[i].v);
            }
        }else{
            if (parent(arre[i].u)!=parent(arre[i].v)){
                unir(arre[i].u,arre[i].v);
            }
        }
        if (arre[i].p>x){
            break;
        }
    }
    cout << res;
    return 0;
}
