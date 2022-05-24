#include <bits/stdc++.h>

using namespace std;

int n,d,q,visit[100010],pila[100010],ciclo[100010];
vector <int> arre[100010];
void busqueda(int u){
    if (pila[u]){
        ciclo[u]++;
        return;
    }
    if (visit[u] || ciclo[u]){
        return;
    }
    visit[u]++;
    pila[u]++;
    for (int vecino: arre[u]){
        busqueda(vecino);
        if (ciclo[vecino]){
            ciclo[u]=1;
        }
    }
    pila[u]--;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> d >> q;
    for (int i=1; i<=d; i++){
        int x,m,a;
        cin >> x >> m;
        for (int j=1; j<=m; j++){
            cin >> a;
            arre[x].push_back(a);
        }
    }
    for (int i=1; i<=n; i++){
        busqueda(i);
    }
    while (q--){
        int m,a,res=0;
        cin >> m;
        for (int i=1; i<=m; i++){
            cin >> a;
            res+=ciclo[a];
        }
        if (res){
            cout << "N" << '\n';
        }else{
            cout << "S" << '\n';
        }
    }
    return 0;
}
/*
7 6 3
1 2 2 4
2 1 6
3 2 2 4
4 1 5
5 1 7
6 1 3

*/
