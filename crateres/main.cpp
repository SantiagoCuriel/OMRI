#include <bits/stdc++.h>

using namespace std;

long long int n,m,it=1,mapa[510][510],crater[510][510],s[125010],res;
struct ura {
    long long int x,y,cra;
};
queue <ura> cola;
void busqueda(long long int f,int c){
    ura inicio,act;
    inicio.x=c;
    inicio.y=f;
    inicio.cra=it;
    it++;
    s[it-1]+=mapa[inicio.x][inicio.y];
    crater[inicio.x][inicio.y]=it-1;

    cola.push(inicio);
    while (cola.size()){
        inicio=cola.front();
        cola.pop();
        //izq
        act=inicio;
        act.x--;
        act.y;
        if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && mapa[act.x][act.y]!=0 && crater[act.x][act.y]==0){
            s[it-1]+=mapa[act.x][act.y];
            cola.push(act);
            crater[act.x][act.y]=it-1;
        }
        //der
        act=inicio;
        act.x++;
        act.y;
        if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && mapa[act.x][act.y]!=0 && crater[act.x][act.y]==0){
            s[it-1]+=mapa[act.x][act.y];
            cola.push(act);
            crater[act.x][act.y]=it-1;
        }
        //arriba
        act=inicio;
        act.x;
        act.y--;
        if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && mapa[act.x][act.y]!=0 && crater[act.x][act.y]==0){
            s[it-1]+=mapa[act.x][act.y];
            cola.push(act);
            crater[act.x][act.y]=it-1;
        }
        //abajo
        act=inicio;
        act.x;
        act.y++;
        if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && mapa[act.x][act.y]!=0 && crater[act.x][act.y]==0){
            s[it-1]+=mapa[act.x][act.y];
            cola.push(act);
            crater[act.x][act.y]=it-1;
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> mapa[j][i];
        }
    }
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            if (mapa[i][j] && !crater[i][j]){
                busqueda(j,i);
            }
        }
    }
    if (it==1){
        cout << 0 << " " << 0;
        return 0;
    }
    for (int i=it; i>=1; i--){
        if (s[i]>=res){
            res=s[i];
            it=i;
        }
    }
    /*for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cout << crater[j][i] << " ";
        }
        cout << '\n';
    }*/
    cout << it << " " << res;
    return 0;
}
