#include <bits/stdc++.h>

using namespace std;
int n,k,caminata,res=INT_MIN;
int a[50010];
int main()
{
    cin >>n >> k;
    for (int i=1; i<=n; i++){
        cin>> a[i];
    }
    for (int i=1; i<k; i++){
        caminata+=a[i+1]-a[i];
    }
    res=caminata;
    for (int i=1; i<=(n-k); i++){
        caminata-=(a[i+1]-a[i]);
        caminata+=(a[k+i]-a[k+i-1]);
        res=max (caminata,res);
    }
    cout << res << endl;
    return 0;
}
