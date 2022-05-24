#include <bits/stdc++.h>

using namespace std;

int n,a[110],t,l;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n*2; i++){
            cin >> a[i];
        }
        sort(a+1,a+n*2+1);
        int r=n*2;
        for (int i=1; i<=n; i++){
            cout << a[i] << " " << a[r] << " ";
            r--;
        }

    }
    return 0;
}
