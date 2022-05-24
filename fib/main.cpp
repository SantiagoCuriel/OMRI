#include <bits/stdc++.h>

using namespace std;

long long int n,arre[1010],mat[1010][1010][2];
int dp(int it, int ant, int est){
    if (it>n){
        return 0;
    }
    if (mat[it][ant][est]!=-1){
        return mat[it][ant][est];
    }
    int tomar,notomar;
    if ((est==1 && arre[it]<arre[ant]) || (est==0 && arre[it]>arre[ant])){
        tomar=dp(it+1,it,(est+1)%2)+1;
        notomar=dp(it+1,ant,est);
    }else{
        notomar=dp(it+1,ant,est);
    }
    if ((est==1 && arre[it]<arre[ant]) || (est==0 && arre[it]>arre[ant])){
        return mat[it][ant][est]=max(tomar,notomar);
    }else{
        return mat[it][ant][est]=notomar;
    }
}
int main()
{
    memset(mat,-1,sizeof(mat));
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    arre[0]=INT_MAX;
    int r1=dp(1,0,1);
    arre[0]=INT_MIN;
    int r2=dp(1,0,0);
    cout << max(r1,r2);
    return 0;
}
