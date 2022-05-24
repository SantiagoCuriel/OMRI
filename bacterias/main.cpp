#include <bits/stdc++.h>

using namespace std;

long long int n,m,a[110][110],visit[110][110];
long long int dp(int x,int y){
    if (x==n && y==m){
        return 0;
    }
    if (x>n || y>m){
        return INT_MAX;
    }
    int sur,este;
    sur=dp(x+1,y)+a[x+1][y];
    este=dp(x,y+1)+a[x][y+1];
    return visit[x][y]=min(sur,este);
}
int main()
{
    memset(visit,-1,sizeof(visit));
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> a[j][i];
        }
    }
    cout << dp(1,1)+a[1][1];
    return 0;
}
