#include <bits/stdc++.h>

using namespace std;

int n,m,a[1010],b[1010],mat[1010][1010][2][2];
long long int dp(int x, int y, int tx, int ty){
    if (x>n || y>m){
        return 0;
    }
    if (mat[x][y][tx][ty]!=-1){
        return mat[x][y][tx][ty];
    }
    int tomarxy=0,notomar=0,tomarx=0,tomary=0;
    if (!tx && !ty){
        tomarxy=dp(x+1,y+1,0,0)+a[x]*b[y];
        tomarx=dp(x,y,1,0);
        tomary=dp(x,y,0,1);
        notomar=dp(x+1,y+1,0,0);
    }
    if (tx && !ty){
        tomary=dp(x+1,y+1,0,0)+(a[x]*b[y]);
        notomar=dp(x,y+1,1,0);
    }
    if (!tx && ty){
        tomarx=dp(x+1,y+1,0,0)+(a[x]*b[y]);
        notomar=dp(x+1,y,0,1);
    }
    return mat[x][y][tx][ty]=max(max(tomarx,tomary),max(tomarxy,notomar));
}
int main()
{
    memset(mat,-1,sizeof(mat));
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    for (int i=1; i<=m; i++){
        cin >> b[i];
    }
    cout << dp(1,1,0,0);
    return 0;
}
/*
5 6
4 7 9 -6 6
5 1 -1 -3 -2 -10
*/
