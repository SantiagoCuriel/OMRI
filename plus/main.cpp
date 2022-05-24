#include <bits/stdc++.h>

using namespace std;

int t,n,a;
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        int mn=INT_MAX,mx=0;
        for (int i=1; i<=n; i++){
            cin >> a;
            mn=min(mn,a);
            mx=max(mx,a);
        }
        cout << mx-mn << '\n';
    }
    return 0;
}
