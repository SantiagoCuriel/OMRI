#include <bits/stdc++.h>

using namespace std;

long long int a,b,x,y;
int main()
{
    cin >> a >> b >> x >> y;
    long long int izq=0,der=(long long int)INT_MAX*(long long int)INT_MAX;
    while (izq+1<der){
        long long int mid=(izq+der)/2;
        long long int na=mid/x,nb=mid/y,n=mid/(x*y),sa=nb-n,sb=na-n,t=mid-(sa+sb+n);
        if (a-sa>0){
            t-=a-sa;
        }
        if (b-sb>0){
            t-=b-sb;
        }
        if (t<0){
            izq=mid;
        }else{
            der=mid;
        }
    }
    cout << der;
    return 0;
}
