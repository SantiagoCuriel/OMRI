#include <bits/stdc++.h>

using namespace std;

int n,m,c,f,mapa[30][30],res;
int visit[30];
void busqueda(int x,int y,int p){
    //der
    if (x>0 && x+1<=n && y>0 && y<=m && !visit[mapa[x+1][y]]){
        visit[mapa[x+1][y]]++;
        busqueda(x+1,y,p+1);
        visit[mapa[x+1][y]]--;
    }
    //izq
    if (x-1>0 && x<=n && y>0 && y<=m && !visit[mapa[x-1][y]]){
        visit[mapa[x-1][y]]++;
        busqueda(x-1,y,p+1);
        visit[mapa[x-1][y]]--;
    }
    //arriba
    if (x>0 && x<=n && y-1>0 && y<=m && !visit[mapa[x][y-1]]){
        visit[mapa[x][y-1]]++;
        busqueda(x,y-1,p+1);
        visit[mapa[x][y-1]]--;
    }
    //abajo
    if (x>0 && x<=n && y>0 && y+1<=m && !visit[mapa[x][y+1]]){
        visit[mapa[x][y+1]]++;
        busqueda(x,y+1,p+1);
        visit[mapa[x][y+1]]--;
    }
    res=max(res,p+1);
}
int main()
{
    cin >> f >> c >> n >> m;
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            cin >> mapa[j][i];
        }
    }
    visit[mapa[c][f]]++;
    busqueda(c,f,0);
    cout << min(res,20);
    return 0;
}
