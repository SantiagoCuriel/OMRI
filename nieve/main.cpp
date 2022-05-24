#include <bits/stdc++.h>

using namespace std;
int n,m,f,c,visit[60][60];
char a[60][60];
struct ura{
    int x,y;
};
queue <ura> cola;
int busqueda(int l){
    ura inicio,act;
    inicio.x=m;
    inicio.y=n;
    cola.push(inicio);
    visit[inicio.x][inicio.y]=l;
    while (cola.size()){
        inicio=cola.front();
        cola.pop();
        //izq
        act=inicio;
        act.x--;
        act.y;
        if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && a[act.x][act.y]=='X' && visit[act.x][act.y]!=l){
            cola.push(act);
            visit[act.x][act.y]=l;
        }
        //der
        act=inicio;
        act.x++;
        act.y;
        if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && a[act.x][act.y]=='X' && visit[act.x][act.y]!=l){
            cola.push(act);
            visit[act.x][act.y]=l;
        }
        //arriba
        act=inicio;
        act.x;
        act.y--;
        int h=act.y,cop=act.y+1;
        while (a[act.x][h]=='.' && h>=1){
            if (a[act.x][h-1]=='X'){
                act.y=h-1;
                h--;
                break;
            }
            h--;
        }
        if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && a[act.x][act.y]=='X' && visit[act.x][act.y]!=l && l>=cop-h){
            cola.push(act);
            visit[act.x][act.y]=l;
        }
        //abajo
        act=inicio;
        act.x;
        act.y++;
        h=act.y;
        cop=h-1;
        while (a[act.x][h]=='.' && h<=n){
            if (a[act.x][h+1]=='X'){
                act.y=h+1;
                h++;
                break;
            }
            h++;
        }
        if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && a[act.x][act.y]=='X' && visit[act.x][act.y]!=l && l>=h-cop){
            cola.push(act);
            visit[act.x][act.y]=l;
        }
        if (visit[c][f]==l){
            return 1;
        }
    }
    return 0;
}
void bin(){
    int izq=0,der=50;
    while (izq+1<der){
        int mid=(izq+der)/2;
        int q=busqueda(mid);
        if (q){
            der=mid;
        }else{
            izq=mid;
        }
        while (cola.size()){
            cola.pop();
        }
    }
    cout << der;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> f >> c;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> a[j][i];
        }
    }
    if (f==n){
        cout << 0;
        return 0;
    }
    bin();
    return 0;
}
/*
5 8
5 3
XXXX....
...X.XXX
XXX..X..
......X.
XXXXXXXX
*/
