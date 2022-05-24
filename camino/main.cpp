#include <bits/stdc++.h>

using namespace std;

int n,p,pat[60],a[310][310],visit[310][310][60],inx,iny,fx,fy,l,mov[5][2],res=INT_MAX;
struct ura{
    int x,y,p,next;
};
queue <ura> cola;
void busqueda(){
    ura inicio,act;
    inicio.next=-1;
    inicio.p=0;
    inicio.x=inx;
    inicio.y=iny;
    cola.push(inicio);
    while (cola.size()){
        inicio=cola.front();
        cola.pop();
        for (int i=1; i<5; i++){
            act=inicio;
            act.x+=mov[i][0];
            act.y+=mov[i][1];
            act.next=(act.next+1)%p;
            act.p++;
            if (act.x>0 && act.x<=n && act.y>0 && act.y<=n && a[act.x][act.y]==pat[act.next] && visit[act.x][act.y][act.next]==-1){
                visit[act.x][act.y][act.next]=act.p;
                cola.push(act);
            }
            if (a[act.x][act.y]==1 && act.x==fx && act.y==fy){
                cout << act.p+1;
                return;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    mov[1][0]++;
    mov[2][0]--;
    mov[3][1]++;
    mov[4][1]--;
    memset(visit,-1,sizeof(visit));
    cin >> n >> p;
    for (int i=0; i<p; i++){
        cin >> pat[i];
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[j][i];
            if (a[j][i]==1){
                if (!l){
                    l++;
                    inx=j;
                    iny=i;
                }else{
                    fx=j;
                    fy=i;
                }
            }
        }
    }
    busqueda();
    //cout << visit[];
    return 0;
}
