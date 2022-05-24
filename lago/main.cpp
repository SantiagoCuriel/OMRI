#include <bits/stdc++.h>

using namespace std;
int n,m,k,a[110][110],visit[110][110],u,v,res,actual,mov[5][3];
struct ura{
    int x,y,p;
};
queue <ura> cola;
void busqueda(int x, int y){
    ura inicio,act;
    inicio.x=x;
    inicio.y=y;
    inicio.p=0;
    cola.push(inicio);
    while (cola.size()){
        inicio=cola.front();
        cola.pop();
        for (int i=1; i<5; i++){
            act=inicio;
            act.x+=mov[i][0];
            act.y+=mov[i][1];
            act.p++;
            if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && a[act.x][act.y] && visit[act.x][act.y]==-1){
                visit[act.x][act.y]=act.p;
                cola.push(act);
                actual++;
            }
        }
    }
}
int main()
{
    memset(visit,-1,sizeof(visit));
    mov[1][1]--;
    mov[2][1]++;
    mov[3][0]--;
    mov[4][0]++;
    cin >> n >> m >> k;
    while (k--){
        cin >> u >> v;
        a[v][u]=1;
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (a[j][i] && visit[j][i]==-1){
                visit[j][i]=0;
                busqueda(j,i);
                res=max(res,actual+1);
            }
        }
    }
    cout << res;
    return 0;
}
