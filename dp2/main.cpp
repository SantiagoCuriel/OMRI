#include <bits/stdc++.h>

using namespace std;

int n,m,visit[110][110];
struct ura{
    int w,v;
};
ura a[110];
int dp(int idx,int p){
    if (p>m){
        return INT_MIN;
    }
    if (idx>n){
        return 0;
    }
    if (visit[idx][p]!=-1){
        return visit[idx][p];
    }
    int tomar=dp(idx+1,p+a[idx].w)+a[idx].v;
    int notomar=dp(idx+1,p);
    return visit[idx][p]=max(tomar,notomar);
}
int main()
{
    memset(visit,-1,sizeof(visit));
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        cin >> a[i].w >> a[i].v;
    }

    cout << dp(1,0);
    return 0;
}
