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
int s;

void busqueda(){
    ura inicio;
    inicio.nodo=s;
    inicio.pasos = 0;
    visit[s]=0;
    cola.push(inicio);
    while(cola.size()){

        ura actual = cola.front();
        cola.pop();
        for(int i=0;i<adj[actual.nodo].size();i++){
            if(visit[ adj[actual.nodo][i] ]==-1){
                visit[ adj[actual.nodo][i] ]=actual.pasos+1;
                ura nuevo;
                nuevo.nodo = adj[actual.nodo][i];
                nuevo.pasos = actual.pasos+1;
                cola.push(nuevo);
            }
        }
    }
}
int main()
{
    memset(visit,-1,sizeof(visit));
    cin>>n>>m>>s;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    busqueda();
    for(int i=1;i<=n;i++){
        cout<<visit[i]<<" ";
    }
    return 0;
}
