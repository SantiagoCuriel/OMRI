#include <bits/stdc++.h>

using namespace std;

int n,m,a[710][710],visit[710][710][4],l;
string k;
struct ura{
    int x,y,p,t;
};
queue <ura> cola;
void busqueda(){
    ura inicio,act;
    inicio.p=0;
    inicio.t=0;
    inicio.x=1;
    inicio.y=1;
    cola.push(inicio);
    while (cola.size()){
        inicio=cola.front();
        cola.pop();
        //izq
        act=inicio;
        if (act.t==0){
            l=a[act.x][act.y]%7;
        }
        if (act.t==1){
            l=a[act.x][act.y]%5;
        }
        if (act.t==2){
            l=a[act.x][act.y]%3;
        }
        if (act.t==3){
            l=a[act.x][act.y]%2;
        }
        act.x--;
        act.y;
        act.p++;
        act.t++;
        act.t%=4;
        if (l==0){
            if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && visit[act.x][act.y][act.t]==-1){
                cola.push(act);
                visit[act.x][act.y][act.t]=act.p;
            }
            if (act.x==m && act.y==n){
                cout << act.p;
                return;
            }
        }
        l=0;
        //der
        act=inicio;
        if (act.t==0){
            l=a[act.x][act.y]%3;
        }
        if (act.t==1){
            l=a[act.x][act.y]%2;
        }
        if (act.t==2){
            l=a[act.x][act.y]%7;
        }
        if (act.t==3){
            l=a[act.x][act.y]%5;
        }
        act.x++;
        act.y;
        act.p++;
        act.t++;
        act.t%=4;
        if (l==0){
            if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && visit[act.x][act.y][act.t]==-1){
                cola.push(act);
                visit[act.x][act.y][act.t]=act.p;
            }
            if (act.x==m && act.y==n){
                cout << act.p;
                return;
            }
        }
        l=0;
        //abajo
        act=inicio;
        if (act.t==0){
            l=a[act.x][act.y]%5;
        }
        if (act.t==1){
            l=a[act.x][act.y]%3;
        }
        if (act.t==2){
            l=a[act.x][act.y]%2;
        }
        if (act.t==3){
            l=a[act.x][act.y]%7;
        }
        act.x;
        act.y++;
        act.p++;
        act.t++;
        act.t%=4;
        if (l==0){
            if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && visit[act.x][act.y][act.t]==-1){
                cola.push(act);
                visit[act.x][act.y][act.t]=act.p;
            }
            if (act.x==m && act.y==n){
                cout << act.p;
                return;
            }
        }
        l=0;
        //arriba
        act=inicio;
        if (act.t==0){
            l=a[act.x][act.y]%2;
        }
        if (act.t==1){
            l=a[act.x][act.y]%7;
        }
        if (act.t==2){
            l=a[act.x][act.y]%5;
        }
        if (act.t==3){
            l=a[act.x][act.y]%3;
        }
        act.x;
        act.y--;
        act.p++;
        act.t++;
        act.t%=4;
        if (l==0){
            if (act.x>0 && act.x<=m && act.y>0 && act.y<=n && visit[act.x][act.y][act.t]==-1){
                cola.push(act);
                visit[act.x][act.y][act.t]=act.p;
            }
            if (act.x==m && act.y==n){
                cout << act.p;
                return;
            }
        }
        l=0;
    }
    cout << "#OirotatorSinFlechas";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(visit,-1,sizeof(visit));
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            a[j][i]=1;
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (i==n && j==m){
                break;
            }
            cin >> k;
            for (int p=0; p<k.size(); p++){
                if (k[p]=='N'){
                    a[j][i]*=2;
                }
                if (k[p]=='E'){
                    a[j][i]*=3;
                }
                if (k[p]=='S'){
                    a[j][i]*=5;
                }
                if (k[p]=='W'){
                    a[j][i]*=7;
                }
            }
        }
    }
    busqueda();
    return 0;
}
