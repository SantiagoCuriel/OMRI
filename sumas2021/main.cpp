#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
lli a[500010],n,res,k,l,in,fin;
int vent(int x, int y){

    return (q);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    l=n-1;
    in=1;
    fin=k;
    sort (a+1,a+n+1);
    for (fin<=n){
        res+=(l*x[i])-(t*x[i]);
        res+=(l*y[i])-(t*y[i]);
        res%=1000000007;
        l--;
        t++;
    }
    cout << res;
    return 0;
}
