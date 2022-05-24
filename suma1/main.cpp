#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
lli x[500010];
lli y[500010];
int n,m,k,p,res;
lli suma(lli ax,lli ay,lli bx,lli by){
    k=abs(ax-bx)%1000000007;
    p=abs(ay-by)%1000000007;
    return (k+p)%1000000007;
}
int main()
{
    cin >> m;
    for (int i=1; i<=m; i++){
        cin >> x[i];
        cin >> y[i];
    }
    for (int i=1; i<m; i++){
        for (int j=i+1; j<=m; j++){
            res+=suma(x[i],y[i],x[j],y[j]);
            res%=1000000007;
        }
    }
    cout << res << endl;
    return 0;
}
