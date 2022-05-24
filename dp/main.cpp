#include <bits/stdc++.h>

using namespace std;

long long int n,arre[1010],mat[1010][1010];
long long int dp(int it, int ant){
    if (it>n){
        return 0;
    }
    if (mat[it][ant]!=-1){
        return mat[it][ant];
    }
    long long int tomar,notomar;
    if (arre[it]>arre[ant]){
        tomar=dp(it+1,it)+1;
        notomar=dp(it+1,ant);
    }else{
        notomar=dp(it+1,ant);
    }
    if (arre[it]<=arre[ant]){
        return mat[it][ant]=notomar;
    }
    return mat[it][ant]=max(tomar,notomar);
}
int main()
{
    memset(mat,-1,sizeof(mat));
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    cout << dp(1,0);
    return 0;
}
/*
9
6 3 10 4 11 5 20 7 9
*/
