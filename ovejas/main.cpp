#include <bits/stdc++.h>

using namespace std;
long long int n,q,visit[1010][1010],qx,qy,mov[10][4];
struct ura{
    long long int x,y,p;
};
queue <ura> cola;
int main()
{
    mov[1][0]=1;
    mov[1][1]=0;

    mov[2][0]=0;
    mov[2][1]=1;

    mov[3][0]=1;
    mov[3][1]=1;

    mov[4][0]=-1;
    mov[4][1]=-1;

    mov[5][0]=-1;
    mov[5][1]=0;

    mov[6][0]=0;
    mov[6][1]=-1;

    mov[7][0]=1;
    mov[7][1]=-1;

    mov[8][0]=-1;
    mov[8][1]=1;

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(visit,-1,sizeof(visit));
    cin >> n >> q;
    for (int i=1; i<=n; i++){
        ura inicio;
        cin >> inicio.x >> inicio.y;
        inicio.p=0;
        cola.push(inicio);
        visit[inicio.x][inicio.y]=0;
    }
    ura act;
    while (cola.size()){
        for(int i=1;i<=8;i++){
            act=cola.front();
            act.x+=mov[i][1];
            act.y+=mov[i][0];
            act.p++;
            if (act.x>=0 && act.x<1001 && act.y>=0 && act.y<1001 && visit[act.x][act.y]==-1){
                visit[act.x][act.y]=act.p;
                cola.push(act);
            }
        }
        cola.pop();
    }
    while (q--){
        cin >> qx >> qy;
        cout << visit[qx][qy] << '\n';
    }
    return 0;
}
