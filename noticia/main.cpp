#include <bits/stdc++.h>

using namespace std;

int n,m,tam[1000010],padre[1000010];
int parent(int u){
    while (padre[u]!=u){
        padre[u]=padre[padre[u]];
        u=padre[u];
    }
    return u;
}
void unir(int u, int v){
    u=parent(u);
    v=parent(v);
    if (u==v){
        return;
    }
    if (tam[u>tam[v]]){
        tam[u]+=tam[v];
        padre[v]=padre[u];
    }else{
        tam[v]+=tam[u];
        padre[u]=padre[v];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        tam[i]=1;
        padre[i]=i;
    }
    for (int i=1; i<=m; i++){
        char c;
        cin >> c;
        if (c=='A'){
            int u,v;
            cin >> u >> v;
            unir(u,v);
        }else{
            int p;
            cin >> p;
            cout << tam[parent(p)] << '\n';
        }
    }
    return 0;
}
