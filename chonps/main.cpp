#include <bits/stdc++.h>

using namespace std;

int n,a[1010],padre[1010],tam[1010],res,in=INT_MAX;
struct ura{
    int u,v,c;
};
ura arre[499510];
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
    if (tam[u]>tam[v]){
        tam[u]+=tam[v];
        padre[v]=u;
    }else{
        tam[v]+=tam[u];
        padre[u]=v;
    }
}
bool compara(ura u, ura v){
    if (u.c<v.c){
        return true;
    }
    return false;
}
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        padre[i]=i;
        tam[i]=1;
        int x=a[i],s=0;
        s+=min(x%10,10-(x%10));
        x/=10;
        s+=min(x%10,10-(x%10));
        x/=10;
        s+=min(x%10,10-(x%10));
        x/=10;
        s+=min(x%10,10-(x%10));
        x/=10;
        in=min(in,s);
    }
    int it=1;
    for (int i=1; i<n; i++){
        for (int j=i+1; j<=n; j++){
            int p=a[i],q=a[j];
            ura x;
            x.u=i;
            x.v=j;
            x.c=0;
            x.c+=min(10-(abs((p%10)-(q%10))),abs((p%10)-(q%10)));
            p/=10;
            q/=10;
            x.c+=min(10-(abs((p%10)-(q%10))),abs((p%10)-(q%10)));
            p/=10;
            q/=10;
            x.c+=min(10-(abs((p%10)-(q%10))),abs((p%10)-(q%10)));
            p/=10;
            q/=10;
            x.c+=min(10-(abs((p%10)-(q%10))),abs((p%10)-(q%10)));
            p/=10;
            q/=10;
            arre[it]=x;
            it++;
        }
    }
    sort(arre+1,arre+it,compara);
    int uni=0;
    for (int i=1; i<it; i++){
        if (parent(arre[i].u)!=parent(arre[i].v)){
            unir(arre[i].u,arre[i].v);
            res+=arre[i].c;
            uni++;
        }
        if (uni==n-1){
            break;
        }
    }
    cout << res+in;
    return 0;
}
