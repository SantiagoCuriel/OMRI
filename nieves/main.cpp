#include <bits/stdc++.h>

using namespace std;

int n,arre[1010],mat[1010][1010];
long long int res;
int dp(int izq, int der, int it){
    if (it>n){
        return 0;
    }
    if (mat[izq][der]!=-1){
        return mat[izq][der];
    }
    int tomari=dp(izq+1,der,it+1),tomard=dp(izq,der-1,it+1);
    return mat[izq][der]=max(tomari+arre[izq]*it,tomard+arre[der]*it);
}
int main()
{
    memset(mat,-1,sizeof(mat));
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    cout << dp(1,n,1);
    return 0;
}
