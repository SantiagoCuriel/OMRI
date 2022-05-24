#include <bits/stdc++.h>

using namespace std;

int n,m,visit[2010][2010],l;
char a[2010][2010];
struct ura{
    int x,y,p;
};
queue <ura> cola;
void busqueda(){
    while (cola.size()){
        ura act=cola.front();
        cola.pop();

        ura nuevo;
        //izq
        nuevo=act;
        nuevo.p++;
        nuevo.y;
        nuevo.x--;
        if (visit[nuevo.x][nuevo.y]==-1 && nuevo.x>0 && nuevo.y>0 && nuevo.x<=n && nuevo.y<=m && a[nuevo.x][nuevo.y]!='#'){
            visit[nuevo.x][nuevo.y]=nuevo.p;
            cola.push(nuevo);
        }
        //der
        nuevo=act;
        nuevo.p++;
        nuevo.y;
        nuevo.x++;
        if (visit[nuevo.x][nuevo.y]==-1 && nuevo.x>0 && nuevo.y>0 && nuevo.x<=n && nuevo.y<=m && a[nuevo.x][nuevo.y]!='#'){
            visit[nuevo.x][nuevo.y]=nuevo.p;
            cola.push(nuevo);
        }
        //abajo
        nuevo=act;
        nuevo.p++;
        nuevo.y++;
        nuevo.x;
        if (visit[nuevo.x][nuevo.y]==-1 && nuevo.x>0 && nuevo.y>0 && nuevo.x<=n && nuevo.y<=m && a[nuevo.x][nuevo.y]!='#'){
            visit[nuevo.x][nuevo.y]=nuevo.p;
            cola.push(nuevo);
        }
        //arriba
        nuevo=act;
        nuevo.p++;
        nuevo.y--;
        nuevo.x;
        if (visit[nuevo.x][nuevo.y]==-1 && nuevo.x>0 && nuevo.y>0 && nuevo.x<=n && nuevo.y<=m && a[nuevo.x][nuevo.y]!='#'){
            visit[nuevo.x][nuevo.y]=nuevo.p;
            cola.push(nuevo);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(visit,-1,sizeof(visit));
    cin >> n >> m;
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            cin >> a[j][i];
            if (a[j][i]=='G'){
            ura g;
            g.x=j;
            g.y=i;
            g.p=0;
            cola.push(g);
            visit[j][i]=0;
            }
        }
    }
    busqueda();
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            cout << visit[j][i] << " ";
            l=max(l,visit[j][i]);
        }
        cout << '\n';
    }
    cout << l;
    return 0;
}
/*
10 10
G###.#G...
....###.#.
##...#..#.
###..G.##.
#######...
.G######.#
......G..#
.#########
.##...#.#.
..G.#....G*/
