#include <bits/stdc++.h>

using namespace std;
int n,k,oruga,res=INT_MIN;
int a[50010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >>n >> k;
    for (int i=1; i<=n; i++){
        cin>> a[i];
    }
    for (int i=1; i<=(n-k+1); i++){
        oruga=a[k+i-1]-a[i];
        res=max (oruga,res);
    }
    cout << res << endl;
    return 0;
}
