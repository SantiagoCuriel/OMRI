#include <bits/stdc++.h>

using namespace std;
struct ura{
    int nodo;
    int pasos;
};
int visit[100002];
vector<int>adj[100002];
queue<ura>cola;
int n;
int m;
int t,res;

void busqueda(){
    ura inicio;
    inicio.nodo=n;
    inicio.pasos=0;
    visit[n]=0;
    cola.push(inicio);
    while(cola.size()){
        ura actual = cola.front();
        cola.pop();
        if (actual.pasos>t-1){
            return;
        }
        for(int i=0;i<adj[actual.nodo].size();i++){
            if(visit[ adj[actual.nodo][i] ]==-1){
                visit[ adj[actual.nodo][i] ]=actual.pasos+1;
                ura nuevo;
                nuevo.nodo = adj[actual.nodo][i];
                nuevo.pasos = actual.pasos+1;
                cola.push(nuevo);
                res++;
            }
        }
    }
}
int main()
{
    memset(visit,-1,sizeof(visit));
    cin>>n>>m>>t;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    busqueda();
    cout << res-1;
    return 0;
}
