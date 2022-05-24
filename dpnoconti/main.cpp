#include <bits/stdc++.h>

using namespace std;

int n,arre[100010],mem[100010];
int dp(int x){
    if (x>n){
        return 0;
    }
    if (mem[x]!=-1){
        return mem[x];
    }
    int tomar=dp(x+2)+arre[x],notomar=dp(x+1);
    return mem[x]=max(tomar,notomar);
}
int main()
{
    memset(mem,-1,sizeof(mem));
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    cout << dp(1);
    return 0;
}
