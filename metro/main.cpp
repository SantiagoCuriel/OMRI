#include <bits/stdc++.h>

using namespace std;

int n,m,padre[30010],tam[30010],res;
struct ura{
    int a,b,c;
};
ura arre[200010];
int parent(int u){
    while (u!=padre[u]){
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
    if (tam[u]>tam[v]){
        padre[v]=u;
        tam[u]+=tam[v];
    }else{
        padre[u]=v;
        tam[v]+=tam[u];
    }
}
bool compara(ura u,ura v){
    if (v.c>u.c){
        return true;
    }
    return false;
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
        int a,b,c;
        cin >> a >> b >> c;
        arre[i].a=a;
        arre[i].b=b;
        arre[i].c=c;
    }
    sort(arre+1,arre+m+1,compara);
    int it=0;
    for (int i=1; i<=m; i++){
        if (parent(arre[i].a)!=parent(arre[i].b)){
            res+=arre[i].c;
            unir(arre[i].a,arre[i].b);
            it++;
        }
        if (it==n-1){
            break;
        }
    }
    cout << res;
    return 0;
}
