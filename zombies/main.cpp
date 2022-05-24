#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
lli n,m,x,y,k,izq,der,l;
lli dia(lli d){
    lli a,dn,ds,de,d0,este,oeste,fn,fs,fe,fo,r;
    a=2LL*d*(d+1)+1;
    dn=max(0LL,d-y+1);
    ds=max(0LL,d-m+y);
    de=max(0LL,d-n+x);
    d0=max(0LL,d-x+1);
    este=d-de+1;
    oeste=d-d0+1;
    fn=dn*dn;
    fs=ds*ds;
    fe=de*de;
    fo=d0*d0;
    r=a-(fn+fs+fe+fo);
    if (dn>este){
        r+=((dn-este)*((dn-este)+1)/2);
    }
    if (dn>oeste){
        r+=((dn-oeste)*((dn-oeste)+1)/2);
    }
    if (ds>este){
        r+=((ds-este)*((ds-este)+1)/2);
    }
    if (ds>oeste){
        r+=((ds-oeste)*((ds-oeste)+1)/2);
    }
    return r;
}
int main()
{
    cin >> n >> m >> x >> y >> k;
    izq=-1;
    der=n*m;
    while (izq+1<der){
        lli mid=(izq+der)/2;
        l=dia(mid);
        if (l>=k){
            der=mid;
        }else{
            izq=mid;
        }
    }
    cout << der;
    return 0;
}
