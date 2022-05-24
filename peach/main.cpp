#include <bits/stdc++.h>

using namespace std;

short n,m,k,mov[5][2],fx,fy;
int visit[1001][1001];
char a[1001][1001];
struct ura{
    int p;
    short x,y;
    bool operator<(ura s)const{
        return p<s.p;
    }
};
multiset <ura> cola;
void busqueda(){
    ura inicio,act;
    set <ura>::iterator it=cola.begin();
    while (cola.size()){
        inicio=*cola.begin();
        cola.erase(cola.begin());
        if (visit[inicio.x][inicio.y]==-1){
            visit[inicio.x][inicio.y]=inicio.p;
            for (short i=1; i<5; i++){
                act=inicio;
                act.x+=mov[i][0];
                act.y+=mov[i][1];
                act.p++;
                if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && visit[act.x][act.y]==-1){
                    if (a[act.x][act.y]=='#'){
                        act.p++;
                    }
                    cola.insert(act);
                }
            }
        }
        /*for (short i=1; i<=n; i++){
            for (short j=1; j<=m; j++){
                cout << visit[j][i] << " ";
            }
            cout << '\n';
        }
        cout << '\n';
        */

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
    cin >> n >> m >> k;
    for (short i=1; i<=n; i++){
        for (short j=1; j<=m; j++){
            cin >> a[j][i];
            if (a[j][i]=='E'){
                ura l;
                l.p=k;
                l.x=j;
                l.y=i;
                cola.insert(l);
            }
            if (a[j][i]=='M'){
                ura l;
                l.p=0;
                l.x=j;
                l.y=i;
                cola.insert(l);
            }
            if (a[j][i]=='P'){
                fx=j;
                fy=i;
            }
        }
    }
    busqueda();
    cout << visit[fx][fy];
    return 0;
}
/*
5 6 2
..#...
P...#.
##.##.
..###.
####M.
*/
