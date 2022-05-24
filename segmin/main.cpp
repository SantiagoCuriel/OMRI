#include <bits/stdc++.h>

using namespace std;

int n,a[1000010],m=INT_MAX,sm=INT_MAX;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        m=min(m,a[i]);
    }
    for (int i=1; i<=n; i++){
        if (a[i]!=m){
            sm=min(sm,a[i]);
        }
    }
    cout << sm << endl;
    return 0;
}
