#include <bits/stdc++.h>

using namespace std;

int arre[300010],n,m,t,res,tam[250010],padre[250010],l[250010],costo[250010];
struct ura{
    int costo,u,v;
};
ura a[250010];
bool compara(ura u, ura v){
    if (u.costo<v.costo){
        return true;
    }
    return false;
}
int parent(int u){
     while (u!=padre[u]){
        padre[u]=padre[padre[u]];
        u=padre[u];
     }
     return u;
}
void unir(int u, int v, int c){
    int x=u,y=v;
    u=parent(u);
    v=parent(v);
    if (padre[u]!=padre[v]){
        if (l[u]==0 && l[v]==0){
            if (tam[v]>tam[u]){
                tam[v]+=tam[u];
                padre[u]=padre[v];
                if (tam[v]>=t){
                    l[v]=1;
                    costo[v]=c;
                }
            }else{
                tam[u]+=tam[v];
                padre[v]=padre[u];
                if (tam[u]>=t){
                    l[u]=1;
                    costo[u]=c;
                }
            }
        }else{
            if (l[u] && !l[v]){
                l[v]++;
                costo[v]=c;
            }else{
                if (!l[u] && l[v]){
                    l[u]++;
                    costo[u]=c;
                }
            }
        }
    }
}
int main()
{
    cin >> n >> m >> t;
    for (int i=1; i<=n*m; i++){
        cin >> arre[i];
    }
    int it=1;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
           if (j+1<=m){
                a[it].costo=abs(arre[((i-1)*m)+j]-arre[((i-1)*m)+j+1]);
                tam[((i-1)*m)+j]=1;
                tam[((i-1)*m)+j+1]=1;
                padre[((i-1)*m)+j]=((i-1)*m)+j;
                padre[((i-1)*m)+j+1]=((i-1)*m)+j+1;
                a[it].u=((i-1)*m)+j;
                a[it].v=((i-1)*m)+j+1;
                it++;
           }
           if (i+1<=n){
                a[it].costo=abs(arre[((i-1)*m)+j]-arre[((i)*m)+j]);
                tam[((i-1)*m)+j]=1;
                tam[((i-1)*m)+j+m]=1;
                padre[((i-1)*m)+j]=((i-1)*m)+j;
                padre[((i-1)*m)+j+1]=((i-1)*m)+j+m;
                a[it].u=((i-1)*m)+j;
                a[it].v=((i-1)*m)+j+m;
                it++;
           }
        }
    }
    sort(a+1,a+it,compara);
    for (int i=1; i<it; i++){
        unir(a[i].u,a[i].v,a[i].costo);
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            int x;
            cin >> x;
            if (x){
                x=parent(((i-1)*m)+j);
                res+=costo[x];
            }
        }
    }
    cout << res;
    return 0;
}
