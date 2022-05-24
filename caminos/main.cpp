#include <bits/stdc++.h>

using namespace std;

int n,m,mem[1010][1010];
int dp(int x, int y){
    if (x==0 || y==0){
        return 0;
    }
    if (x==1 && y==1){
        return 1;
    }
    if (mem[x][y]!=-1){
        return mem[x][y];
    }
    int abajo=dp(x-1,y),der=dp(x,y-1);
    return mem[x][y]=abajo+der;
}
int main()
{
    memset(mem,-1,sizeof(mem));

    cin >> n >> m;

    cout << dp(n,m);
    return 0;
}
