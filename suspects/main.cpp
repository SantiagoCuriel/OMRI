#include <bits/stdc++.h>

using namespace std;

int n,s,k,padre[30010],tam[30010];
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    while (n!=0 || s!=0){
        for (int i=0; i<n; i++){
            tam[i]=1;
            padre[i]=i;
        }
        for (int i=1; i<=s; i++){
            cin >> k;
            if (k){
                int p,x;
                cin >> p;
                for (int j=2; j<=k; j++){
                    cin >> x;
                    if (parent(p)!=parent(x)){
                        unir(p,x);
                    }
                }
            }
        }
        cout << tam[parent(0)] << '\n';
        cin >> n >> s;
    }
    return 0;
}
