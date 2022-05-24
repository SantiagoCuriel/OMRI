#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
lli a,b,x,y;
int main()
{
    cin >> a >> b >> x >> y;
    lli izq=0,der=(lli)INT_MAX*(lli)INT_MAX;
    while (izq+1<der){
        lli mid=(izq+der)/2;
        lli na1=mid/x,na2=mid/y,n=mid/(x*y),soloa1=na2-n,soloa2=na1-n,todos=mid-(soloa1+soloa2+n);
        if (a-soloa1>0){
            todos-=a-soloa1;
        }
        if (b-soloa2>0){
            todos-=b-soloa2;
        }
        if (todos<0){
            izq=mid;
        }else{
            der=mid;
        }
    }
    cout << der;
    return 0;
}
