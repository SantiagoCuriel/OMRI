#include <bits/stdc++.h>
int n,k,a[100010];
using namespace std;

int main()
{
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    sort (a+1,a+n+1);
    if (k==0){
        cout << a[n]-a[1];
    }
    for (int i=1; i<=k; i++){
        a[n]+=a[n-i];
        a[n-i]=0;
    }
    if (k!=0){

    }
    return 0;
}
