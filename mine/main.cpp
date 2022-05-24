#include <bits/stdc++.h>

using namespace std;

int n,m,k,mov[5][2],visit[510][510],inx,iny,fx,fy;
char a[510][510];
struct ura{
    int x,y,p;
    bool operator<(ura s)const{
        return p<s.p;
    }
};
multiset <ura> cola;
void busqueda(){
    ura inicio,act;
    inicio.x=inx;
    inicio.y=iny;
    inicio.p=0;
    cola.insert(inicio);


    while (cola.size()){
        set <ura>::iterator it=cola.begin();
        inicio=*it;
        cola.erase(cola.begin());
        if(visit[inicio.x][inicio.y]==-1){
            visit[inicio.x][inicio.y]=inicio.p;
            for (int i=1; i<=4; i++){
                act=inicio;
                act.x+=mov[i][0];
                act.y+=mov[i][1];
                act.p++;
                if (act.x>0 && act.x<=n && act.y>0 && act.y<=m && a[act.x][act.y]!='#' && visit[act.x][act.y]==-1){
                    if (a[act.x][act.y]>='1' && a[act.x][act.y]<='9'){
                        act.p+=a[act.x][act.y]-'0';
                    }
                    cola.insert(act);
                }
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
    cin >> m >> n >> iny >> inx >> fy >> fx;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> a[j][i];
        }
    }
    busqueda();
    cout << visit[fx][fy];
    return 0;
}
/*
5 5
2 2
4 4
#####
#...#
#123#
#1..#
#####

5 5
2 2
4 4
#####
#...#
#123#
#1..#
#####
2 2
*/
