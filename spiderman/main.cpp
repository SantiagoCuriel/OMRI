#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
lli n,m,k,x,y,mn,mx,res;
int main()
{
    cin >> n >> m >> k >> x >> y;
    mn=min(x,y);
    mx=max(x,y);
    if (mn==x){
        if (k>=((m-1)*x)+y){
            res+=k/(((m-1)*x)+y);
            k-=res*(((m-1)*x)+y);
            res*=m;
        }
        if (k/mn<m){
            res+=k/mn;
        }else{
            res+=m-1;
        }
    }else{
        if (k>=((n-1)*y)+x){
            res+=k/(((n-1)*y)+x);
            k-=res*(((n-1)*y)+x);
            res*=n;
        }
        if (k/mn<n){
            res+=k/mn;
        }else{
            res+=n-1;
        }
    }
    cout << min(res+1,m*n);
    return 0;
}
