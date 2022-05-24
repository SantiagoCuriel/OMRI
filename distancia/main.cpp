#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
lli n,m,x,padre[100010],tam[100010],res;
struct ura{
    lli a,b,c;
};
ura arre[300010];
bool compara(ura u, ura v){
    if (u.c<v.c){
        return true;
    }
    return false;
}
lli parent(lli u){
    while (u!=padre[u]){
        padre[u]=padre[padre[u]];
        u=padre[u];
    }
    return u;
}
void unir(lli u, lli v){
    u=parent(u);
    v=parent(v);
    if (u>v){
        tam[u]+=tam[v];
        padre[v]=u;
    }else{
        tam[v]+=tam[u];
        padre[u]=v;
    }
}

int main()
{
    cin >> n >> m >> x;
    for (lli i=1; i<=n; i++){
        tam[i]=1;
        padre[i]=i;
    }
    for (lli i=1; i<=m; i++){
        ura in;
        cin >> in.a >> in.b >> in.c;
        arre[i]=in;
    }
    sort(arre+1,arre+m+1,compara);
    for (lli i=1; arre[i].c<=x && arre[i].c!=0; i++){
        if (parent(arre[i].a)!=parent(arre[i].b)){
            if (arre[i].c==x){
                res+=tam[parent(arre[i].a)]*tam[parent(arre[i].b)];
            }
            unir(arre[i].a,arre[i].b);
        }
    }
    cout << res;
    return 0;
}
