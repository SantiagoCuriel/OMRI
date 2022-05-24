#include <bits/stdc++.h>

using namespace std;

long long int n,m,t,in[110][110],s[110][110],p[110][110],mat[110][110][510],res;
long long int dp(int x, int y, int seg){
    if (seg>t){
        return 0;
    }
    if (x<1 || x>n || y<1 || y>m){
        return 0;
    }
    if (mat[x][y][seg]!=-1){
        return mat[x][y][seg];
    }
    int tomar=dp(x,y,seg+1),arriba=dp(x-1,y,seg+1),abajo=dp(x+1,y,seg+1),izq=dp(x,y-1,seg+1),der=dp(x,y+1,seg+1),arribaizq=dp(x-1,y-1,seg+1),arribader=dp(x-1,y+1,seg+1),abajoizq=dp(x+1,y-1,seg+1),abajoder=dp(x+1,y+1,seg+1);
    if (s[x-1][y] && (seg-in[x-1][y])%s[x-1][y]==0 && seg-in[x-1][y]>=0){
        arriba+=p[x-1][y];
    }
    if (s[x+1][y] && (seg-in[x+1][y])%s[x+1][y]==0 && seg-in[x+1][y]>=0){
        abajo+=p[x+1][y];
    }
    if (s[x][y-1] && (seg-in[x][y-1])%s[x][y-1]==0 && seg-in[x][y-1]>=0){
        izq+=p[x][y-1];
    }
    if (s[x][y+1] && (seg-in[x][y+1])%s[x][y+1]==0 && seg-in[x][y+1]>=0){
        der+=p[x][y+1];
    }
    if (s[x-1][y-1] && (seg-in[x-1][y-1])%s[x-1][y-1]==0 && seg-in[x-1][y-1]>=0){
        arribaizq+=p[x-1][y-1];
    }
    if (s[x-1][y+1] && (seg-in[x-1][y+1])%s[x-1][y+1]==0 && seg-in[x-1][y+1]>=0){
        arribader+=p[x-1][y+1];
    }
    if (s[x+1][y-1] && (seg-in[x+1][y-1])%s[x+1][y-1]==0 && seg-in[x+1][y-1]>=0){
        abajoizq+=p[x+1][y-1];
    }
    if (s[x+1][y+1] && (seg-in[x+1][y+1])%s[x+1][y+1]==0 && seg-in[x+1][y+1]>=0){
        abajoder+=p[x+1][y+1];
    }
    if (s[x][y] && (seg-in[x][y])%s[x][y]==0 && seg-in[x][y]>=0){
        tomar+=p[x][y];
    }

    return mat[x][y][seg]=max(max(max(abajo,arriba),max(izq,der)),max(max(arribader,arribaizq),max(abajoizq,max(tomar,abajoder))));
}
int main()
{
    memset(mat,-1,sizeof(mat));
    cin >> n >> m >> t;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> in[j][i];
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> s[j][i];
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> p[j][i];
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            res=max(res,dp(j,i,1));
        }
    }
    cout << res;
    return 0;
}
