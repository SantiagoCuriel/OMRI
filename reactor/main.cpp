#include <bits/stdc++.h>

using namespace std;

int n,m,p,visit[100010],pila[100010],cubeta[100010];
vector <int> adj[100010],ciclo;
int exterior1,exterior2,bandera;
void busqueda1(int nodo){
    if(pila[nodo]){
        ciclo.push_back(nodo);
        return;
    }
    if(visit[nodo]){
        return;
    }
    visit[nodo]=1;
    if(!adj[nodo].size()){
        exterior1++;
        return;
    }
    pila[nodo]=1;
    for(int vecino:adj[nodo]){
        busqueda1(vecino);
    }
    pila[nodo]=0;
}
void busqueda2(int nodo){
    if(visit[nodo]==2){
        return;
    }
    visit[nodo]=2;
    for(int vecino:adj[nodo]){
        cubeta[vecino]++;
        if(cubeta[vecino]>=2){
            bandera++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> p;
    for (int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    busqueda1(p);
    if (ciclo.size()){
        for (int vecino: ciclo){
            busqueda2(vecino);
        }

        if (bandera){
            cout << "S" << '\n' << exterior1 << " " << exterior2 << '\n';
        }else{
            cout << "G" << '\n' << exterior1 << " " << exterior2 << '\n';
        }
    }else{
        cout << "B" << '\n' << exterior1 << " " << 0 << '\n';
    }
    return 0;
}
