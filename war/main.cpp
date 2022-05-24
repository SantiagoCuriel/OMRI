#include <bits/stdc++.h>

using namespace std;

int n,padre[10010],tam[10010],c,a,b,visit[10010][10010];
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
        padre[v]=padre[u];
    }else{
        tam[u]+=tam[v];
        padre[v]=padre[u];
    }
}
int main()
{
    cin >> n;
    cin >> c >> a >> b;
    for (int i=0; i<n; i++){
        tam[i]=1;
        padre[i]=i;
        visit[i][i]++;
    }
    while (c || a || b){
        if (c==1){
            if (visit[parent(a)][parent(b)]==0){
                unir(parent(a),parent(b));
                visit[parent(a)][parent(b)]++;
                visit[parent(b)][parent(a)]++;
            }
            if (parent(a)!=parent(b)){
                cout << -1 << '\n';
            }
        }
        if (c==2){
            if (parent(a)==parent(b)){
                cout << -1 << '\n';
            }
            if (visit[parent(a)][parent(b)]==0){
                visit[parent(a)][parent(b)]--;
                visit[parent(b)][parent(a)]--;
            }
        }
        if (c==3){
            if (parent(a)==parent(b) && tam[parent(a)]!=1 && tam[parent(b)]!=1){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }
        if (c==4){
            if (parent(a)!=parent(b) && tam[parent(a)]!=1 && tam[parent(b)]!=1){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }
        cin >> c >> a >> b;
    }
    return 0;
}
