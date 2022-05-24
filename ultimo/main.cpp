#include <bits/stdc++.h>

using namespace std;

int n,m,k,a[1010],l,p,f1=1,f2=1;
int main()
{
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    for (int i=1; i<=n; i++){
        for (int j=i+1; j<=n; j++){
            if (a[i]+a[j]<=k){
                l++;
            }
        }
    }
    cout << l;
    return 0;
}
