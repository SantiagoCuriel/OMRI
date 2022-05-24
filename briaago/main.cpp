#include <bits/stdc++.h>

using namespace std;

long long int n,arre[1010],mat[1010][1010][2];
long long int dp(int izq, int der,int x){
    if (izq>der){
        return 0;
    }
    if (mat[izq][der][x]!=-1){
        return mat[izq][der][x];
    }
    long long int tomari,tomard;
    if (x==0){
        tomari=dp(izq+1,der,(x+1)%2)+arre[izq];
        tomard=dp(izq,der-1,(x+1)%2)+arre[der];
    }else{
        tomari=dp(izq+1,der,(x+1)%2);
        tomard=dp(izq,der-1,(x+1)%2);
    }
    if (!x){
        return mat[izq][der][x]=max(tomari,tomard);
    }else{
        return mat[izq][der][x]=min(tomari,tomard);
    }
}
int main()
{
    memset(mat,-1,sizeof(mat));
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    cout << dp(1,n,0);
    return 0;
}
