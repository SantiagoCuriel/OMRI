#include <bits/stdc++.h>

using namespace std;

long long int n,q,a[100010],b[100010];
int main()
{
    a[1]=1;
    b[2]=1;
    for (int i=3; i<=100000; i++){
        a[i]+=a[i-1]%1000000007+a[i-2]%1000000007;
        a[i]%=1000000007;
        b[i]+=b[i-1]%1000000007+b[i-2]%1000000007;
        b[i]%=1000000007;
    }
    cin >> q;
    while (q--){
        int x,y,in;
        cin >> x >> y >> in;
        cout << ((a[in]*x%1000000007)+(b[in]*y%1000000007))%1000000007 << '\n';
    }
    return 0;
}
