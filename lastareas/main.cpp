#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
lli n,a[100010],k,l,res,act,s,m,v,in,fin;
bool compara(lli x,lli y){
    return x>y;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    m=k-1;
    sort (a+1,a+n+1,compara);
    for (int i=1; i<=k; i++){
        res+=a[i]*m;
        m-=2;
        if (i!=1){
            v+=a[i]*2;
        }
    }
    act=res;
    for (int i=2; i<=n-k+1; i++){
        act+=v-(a[i-1]*(k-1)+a[i+k-1]*(k-1));
        v-=a[i]*2;
        v+=a[i+k-1]*2;
        res=min(res,act);
    }
    cout << res;
    return 0;
}
