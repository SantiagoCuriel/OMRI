#include <bits/stdc++.h>

using namespace std;

int n,m,k,mov[15][2],visit[1010][1010],inx,iny,fx,fy;
struct ura{
    int x,y,p;
};
queue <ura> cola;
void busqueda(){
    ura inicio,act;
    inicio.x=inx;
    inicio.y=iny;
    inicio.p=0;
    cola.push(inicio);
    visit[inicio.x][inicio.y]=0;
    while (cola.size()){
        inicio=cola.front();
        cola.pop();
        for (int i=1; i<=k; i++){
            act=inicio;
            act.x+=mov[i][0];
            act.y+=mov[i][1];
            act.p++;
            if (act.x>0 && act.x<=n && act.y>0 && act.y<=m && visit[act.x][act.y]==-1){
                visit[act.x][act.y]=act.p;
                cola.push(act);
            }
        }
    }
}
int main()
{
    memset(visit,-1,sizeof(visit));
    cin >> n >> m >> k >> inx >> iny >> fx >> fy;
    for (int i=1; i<=k; i++){
        cin >> mov[i][0] >> mov[i][1];
    }
    busqueda();
    if (visit[fx][fy]!=-1){
        cout << visit[fx][fy];
    }else{
        cout << -1;
    }
    return 0;
}
