#include <bits/stdc++.h>

using namespace std;

int n,m,mov[9][2];
char a[1510][1510];
struct ura{
    int x,y;
};
queue <ura> cola;
int main()
{
    mov[1][0]=1;
    mov[1][1]=0;

    mov[2][0]=-1;
    mov[2][1]=0;

    mov[3][0]=0;
    mov[3][1]=1;

    mov[4][0]=0;
    mov[4][1]=-1;

    mov[5][0]=1;
    mov[5][1]=1;

    mov[6][0]=-1;
    mov[6][1]=1;

    mov[7][0]=1;
    mov[7][1]=-1;

    mov[8][0]=-1;
    mov[8][1]=-1;
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> a[j][i];
            if (a[j][i]=='1'){
                ura in;
                in.x=j;
                in.y=i;
                cola.push(in);
            }
        }
    }
    while (cola.size()){
        ura act=cola.front();
        //arriba izq
        if (a[act.x-1][act.y]=='1' && a[act.x][act.y-1]=='1' && a[act.x-1][act.y-1]=='0'){
            act.x--;
            act.y--;
            a[act.x][act.y]='1';
            cola.push(act);
            for (int i=1; i<9; i++){
                act.x+=mov[i][0];
                act.y+=mov[i][1];
                if (a[act.x][act.y]=='1'){
                    cola.push(act);
                }
                act.x-=mov[i][0];
                act.y-=mov[i][1];
            }
        }
        //arriba der
        act=cola.front();
        if (a[act.x-1][act.y]=='1' && a[act.x][act.y+1]=='1' && a[act.x-1][act.y+1]=='0'){
            act.x--;
            act.y++;
            a[act.x][act.y]='1';
            cola.push(act);
            for (int i=1; i<9; i++){
                act.x+=mov[i][0];
                act.y+=mov[i][1];
                if (a[act.x][act.y]=='1'){
                    cola.push(act);
                }
                act.x-=mov[i][0];
                act.y-=mov[i][1];
            }
        }
        //abajo izq
        act=cola.front();
        if (a[act.x+1][act.y]=='1' && a[act.x][act.y-1]=='1' && a[act.x+1][act.y-1]=='0'){
            act.x++;
            act.y--;
            a[act.x][act.y]='1';
            cola.push(act);
            for (int i=1; i<9; i++){
                act.x+=mov[i][0];
                act.y+=mov[i][1];
                if (a[act.x][act.y]=='1'){
                    cola.push(act);
                }
                act.x-=mov[i][0];
                act.y-=mov[i][1];
            }
        }
        //abajo der
        act=cola.front();
        if (a[act.x+1][act.y]=='1' && a[act.x][act.y+1]=='1' && a[act.x+1][act.y+1]=='0'){
            act.x++;
            act.y++;
            a[act.x][act.y]='1';
            cola.push(act);
            for (int i=1; i<9; i++){
                act.x+=mov[i][0];
                act.y+=mov[i][1];
                if (a[act.x][act.y]=='1'){
                    cola.push(act);
                }
                act.x-=mov[i][0];
                act.y-=mov[i][1];
            }
        }
        cola.pop();
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cout << a[j][i];
        }
        cout << '\n';
    }
    return 0;
}
