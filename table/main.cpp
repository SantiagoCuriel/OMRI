#include <bits/stdc++.h>

using namespace std;

int n,mat[100][7],q;
int test(int l, int r){
    int d=r-l+1,t=log(d)/log(2),x=1<<t;
    return max(mat[l][t],mat[r-x+1][t]);
}
int main()
{
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> mat[i][0];
    }
    int t=log(n)/log(2),x=1;
    for (int i=1; i<=t; i++){
        for (int j=0; j+x-1<n; j++){
            mat[j][i]=max(mat[j][i-1],mat[j+x][i-1]);
        }
        x*=2;
    }
    cin >> q;
    while (q--){
        int l,r;
        cin >> l >> r;
        cout << test(l,r);
    }
    return 0;
}
