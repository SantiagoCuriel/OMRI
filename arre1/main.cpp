#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
int n,a[1000010],s,m;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        s+=a[i];
        m=max(m,a[i]);
    }
    for (int i=1; i<=n; i++){
        if (a[i]==m){
            a[i]-=m+1;
            m=0;
            break;
        }
    }
    sort(a+1,a+n+1);
    cout << n/2+n%2 << '\n';
    for (int i=2; i<=n+1; i+=2){
        cout << a[i] << " ";
    }
    cout << '\n' << n/2 << '\n';
    for (int i=3; i<=n; i+=2){
        cout << a[i] << " ";
    }
    return 0;
}
