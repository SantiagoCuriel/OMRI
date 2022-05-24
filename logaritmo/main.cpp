#include <bits/stdc++.h>

using namespace std;

int n,mat[100][7];
int test(int l, int r){
    int d=r-l+1,x=0,t=0;
    t=log(d)/log(2);
    x=1<<t;
    return min(mat[l][t],mat[r-x+1][t]);
}

int main()
{
    memset(mat,-1,sizeof(mat));
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> mat[i][0];
    }
    int t=log(n)/log(2),x=1;
    for (int i=1; i<=t; i++){
        for (int j=0; j+x-1<n; j++){
            mat[j][i]=min(mat[j][i-1],mat[j+x][i-1]);
        }
        x*=2;
    }
    for (int i=0; i<=n; i++){
        for (int j=0; j<=t; j++){
            cout << mat[i][j] << " ";
        }
        cout << '\n';
    }
    int q,l,r;
    cin >> q;
    while (q--){
        cin >> l >> r;
        cout << test(l,r) << '\n';
    }
    return 0;
}
