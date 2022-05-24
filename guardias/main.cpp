#include <bits/stdc++.h>

using namespace std;

int n,m,res[2010][2010],mov[5][2],l;
char a[2010][2010];
struct ura{
    int x,y,p;
};
queue <ura> cola;
int main()
{
    mov[1][0]=-1;
    mov[1][1]=0;

    mov[2][0]=1;
    mov[2][1]=0;

    mov[3][0]=0;
    mov[3][1]=-1;

    mov[4][0]=0;
    mov[4][1]=1;
    memset(res,-1,sizeof(res));
    cin >> m >> n;
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            cin >> a[j][i];
            if (a[j][i]=='G'){
                ura g;
                g.p=0;
                g.x=j;
                g.y=i;
                cola.push(g);
                res[j][i]=0;
            }
        }
    }
    while (cola.size()){
        ura act=cola.front();
        for (int i=1; i<=4; i++){
            act.p++;
            act.x+=mov[i][0];
            act.y+=mov[i][1];
            if (a[act.x][act.y]=='.' && res[act.x][act.y]==-1){
                res[act.x][act.y]=act.p;
                cola.push(act);
                l=max(l,act.p);
            }
            act=cola.front();
        }
        cola.pop();
    }
    cout << l;
    return 0;
}
