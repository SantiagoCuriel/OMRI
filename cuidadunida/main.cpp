#include <bits/stdc++.h>

using namespace std;

int n,m,tam[2010],padre[2010],visit[2010][2010];
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
    memset(visit,-1,sizeof(visit));
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        tam[i]=1;
        padre[i]=i;
    }
    for (int i=1; i<=m; i++){
        int u,v;
        cin >> u >> v;
        unir(u,v);
    }
    long long int res=0,u,v;
    for (int i=1; i<=n; i++){
        u=parent(i);
        for (int j=i+1; j<=n; j++){
            v=parent(j);
            if (visit[u][v]==-1){
                if (u!=v){
                    res+=(tam[u])*tam[v];
                }
                visit[u][v]=0;
                visit[v][u]=0;
            }
        }
    }
    cout << res;
    return 0;
}
