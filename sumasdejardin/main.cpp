#include <bits/stdc++.h>

using namespace std;
long long int n,r,c=1,h;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (long long int i=n; i>0; i--){
        cin >> h;
        r+=(h)*((i*(n-i+1)))%1000000007;
        r%=1000000007;
    }
    cout << r;
    return 0;
}
