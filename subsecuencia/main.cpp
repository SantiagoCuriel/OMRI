#include <bits/stdc++.h>

using namespace std;

int n,a[1010],visit[1010][1010
];
int dp(int idx,int ant){
    if (idx>n){
        return 0;
    }
    if (visit[idx][ant]!=-1){
        return visit[idx][ant];
    }
    int tomar=0,notomar=dp(idx+1,ant);
    if (a[idx]>a[ant]){
        tomar=dp(idx+1,idx)+1;
    }
    return visit[idx][ant]=max(tomar,notomar);
}
int main()
{
    memset(visit,-1,sizeof(visit));
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    cout << dp(1,0);
    return 0;
}
