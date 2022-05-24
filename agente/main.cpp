#include <bits/stdc++.h>

using namespace std;
int n,m,visit[2010][2010],mov[5][5],res;
char a[2010][2010];
struct ura{
    int x,y,p;
};
queue <ura> cola;
void busqueda(){
    while (cola.size()){
        ura in,act;
        in=cola.front();
        cola.pop();
        for (int i=1; i<=4; i++){
            act=in;
            act.x+=mov[i][2];
            act.y+=mov[i][1];
            act.p++;
            if (act.x>0 && act.x<=n && act.y>0 && act.y<=m && a[act.x][act.y]!='#' && visit[act.x][act.y]==-1){
                visit[act.x][act.y]=act.p;
                cola.push(act);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(visit,-1,sizeof(visit));
    mov[1][2]--;
    mov[2][2]++;
    mov[3][1]--;
    mov[4][1]++;
    cin >> m >> n;
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            cin >> a[j][i];
            if (a[j][i]=='G'){
                ura in;
                in.p=0;
                in.x=j;
                in.y=i;
                visit[j][i]++;
                cola.push(in);
            }
        }
    }
    busqueda();
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            res=max(res,visit[j][i]);
        }
    }
    cout << res;
    return 0;
}
