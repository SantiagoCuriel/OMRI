#include <bits/stdc++.h>

using namespace std;

long long int n,a[100010],l,k,izq,der;
long long int revisa(long long int x){
    long long int r=0;
    for (long long int i=1; i<=n; i++){
        r+=abs(x-a[i]);
    }
    return r;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (long long int i=1; i<=n; i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    izq=0;
    der=n;
    while (izq+1<der){
        long long int mid=(izq+der)/2;
        l=revisa(a[mid]);
        k=revisa(a[mid]+1);
        if (l>k){
            izq=mid;
        }else{
            der=mid;
        }
    }
    cout << revisa(a[der]);
    return 0;
}
