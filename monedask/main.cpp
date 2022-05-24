#include <bits/stdc++.h>

using namespace std;

int n,arre[1010],mem[1010][1010],k,res;
int dp(int x, int suma){

    if (x>n || suma>k){
        return 0;
    }
    if (suma==k){
        res++;
        return 1;
    }
    if (mem[x][suma]!=-1){
        return mem[x][suma];
    }
    int tomarmov=dp(x+1,suma+arre[x]),tomar=dp(x,suma+arre[x]),notomar=dp(x+1,suma);
    return mem[x][suma]=tomar+tomarmov+notomar;
}
int main()
{
    memset(mem,-1,sizeof(mem));
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    int l=dp(1,0);
    cout << res;
    return 0;
}
