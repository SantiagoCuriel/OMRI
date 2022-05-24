#include <bits/stdc++.h>

using namespace std;

long long int m,k,l;
int main()
{
    cin >> m;
    long long int izq=-1,der=(long long int)INT_MAX*(long long int)INT_MAX;
    while (izq+1LL<der){
        long long int mid=(izq+der)/2LL;
        for (long long int i=5LL; i<=mid; i*=5LL){
            l+=mid/i;
        }
        if (l<m){
            izq=mid;
        }else{
            der=mid;
        }
        l=0LL;
    }
    cout << der;
    return 0;
}
