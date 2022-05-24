#include <bits/stdc++.h>

using namespace std;

long long int a,b,x,y,izq,der;
int v(long long int n){
    long long int l=n/x,k=n/y,lk=n/(x*y),todos=n-l-k+lk,solol=k-lk,solok=l-lk;
    if (solol<a){
        todos-=a-solol;
    }
    if (solok<b){
        todos-=b-solok;
    }
    if (todos<0){
        return 0;
    }
    return 1;
}
int main()
{
    cin >> a >> b >> x >> y;
    izq=0;
    der=100000000000LL;
    while (izq+1<der){
        long long int mid=(izq+der)/2;
        int p=v(mid);
        if (p){
            der=mid;
        }else{
            izq=mid;
        }
    }
    cout << der;
    return 0;
}
