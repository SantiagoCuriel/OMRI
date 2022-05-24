#include <bits/stdc++.h>

using namespace std;

int n,m,visit[40010][500],t,pal[500];
int palindromo(int x){
    int r=0,c=x;;
    while (x){
        r*=10;
        r+=x%10;
        x/=10;
    }
    if (c==r){
        return 1;
    }
    return 0;
}
int dp(int x, int p){
    if (x<0 || p<=0){
        return 0;
    }
    if (x==0){
        return 1;
    }
    if (visit[x][p]>=0){
        return visit[x][p];
    }
    visit[x][p]=0;
    return visit[x][p]=dp(x,p-1)+dp(x-pal[p],p);
}
int main()
{
    memset(visit,-1,sizeof(visit));
    int it=1;
    for (int i=1; i<=40000; i++){
        if (palindromo(i)){
            pal[it]=i;
            it++;
        }
    }
    cin >> t;
    while (t--){
        cin >> n;
        dp(n,it-1);
        cout << visit[n][498] << '\n';
    }
    return 0;
}
