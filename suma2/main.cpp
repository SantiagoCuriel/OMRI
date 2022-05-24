#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
lli x[500010];
lli y[500010];
lli n,m,p,k,res,r=0,s;
lli suma(lli ax,lli bx,lli ay,lli by){
    k=abs(ax-bx)%1000000007;
    p=abs(ay-by)%1000000007;
    return (k)%1000000007;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> m;
    for (int i=1; i<=m; i++){
        cin >> x[i];
        cin >> y[i];
    }
    s=m-1;
    sort (x+1,x+m+1);
    sort (y+1,y+m+1);
    for (int i=m; i>=1; i--){
        res+=(s*x[i])-(r*x[i]);
        res+=(s*y[i])-(r*y[i]);
        //res+=1000000007;
        res%=1000000007;
        s--;
        r++;
    }
    cout << res << endl;
    return 0;
}
