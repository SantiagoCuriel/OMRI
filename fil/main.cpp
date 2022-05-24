#include <bits/stdc++.h>

using namespace std;

int r,c,mat[1010][1010],visit[1010][1010],q;
struct ura{
    int p,x,y;
};
queue <ura> cola;
void busqueda(){
    while (cola.size()){
        ura act=cola.front();
        if (mat[act.x][act.y]==1 || act.x<=0 || act.x>r || act.y<=0 || act.y>c){
            visit[act.x][act.y]=-1;
        }else{
            if (visit[act.x][act.y]==-1){
                visit[act.x][act.y]=act.p;
            }
            //izq
            if (visit[act.x][act.y-1]==-1){
                act.y--;
                act.p++;
                cola.push(act);
            }
            act=cola.front();
            //der
            if (visit[act.x][act.y+1]==-1){
                act.y++;
                act.p++;
                cola.push(act);
            }
            act=cola.front();
            //abajo
            if (visit[act.x+1][act.y]==-1){
                act.x++;
                act.p++;
                cola.push(act);
            }
            act=cola.front();
            //arriba
            if (visit[act.x-1][act.y]==-1){
                act.x--;
                act.p++;
                cola.push(act);
            }
        }
        cola.pop();
    }
}
int main()
{
    memset(visit,-1,sizeof(visit));
    cin >> r >> c;
    for (int i=1; i<=r; i++){
        for (int j=1; j<=c; j++){
            cin >> mat[i][j];
        }
    }
    for (int i=1; i<=c; i++){
        ura inicio;
        inicio.p=0;
        inicio.x=r;
        inicio.y=i;
        cola.push(inicio);
    }
    busqueda();
    cin >> q;
    while (q--){
        int x,y;
        cin >> x >> y;
        cout << visit[x][y] << '\n';
    }
    return 0;
}
/*
4 4
1 0 0 1
0 1 0 1
0 0 0 0
1 1 1 0
*/
