#include <bits/stdc++.h>

using namespace std;

long long int n,arre[1010],mat[1010][30010][2];
long long int dp(int it, int s,int toma){
    if (it>n){
        if (toma==0){
            return 0;
        }
        if (s==0){
            return 1;
        }
        return 0;
    }
    if (mat[it][s+10000][toma]!=-1){
        return mat[it][s+10000][toma]%1000000007;;
    }
    long long int res = 0;
    if(toma&&s==0){
        res++;
    }
    long long int tomarb=dp(it+1,s+arre[it],1);
    long long int tomarn=dp(it+1,s-arre[it],1);
    long long int notomar=0;
    if(toma==0){
        notomar=dp(it+1,s,0);
    }
    tomarb%=1000000007;
    tomarn%=1000000007;
    notomar%=1000000007;
    return mat[it][s+10000][toma]=(tomarb+tomarn+notomar+res)%1000000007;
}
int main()
{
    memset(mat,-1,sizeof(mat));
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    cout << dp(1,0,0)%1000000007;
    return 0;
}
