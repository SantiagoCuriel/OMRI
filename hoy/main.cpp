#include <iostream>

using namespace std;
int k;
long long int res,n;
int main()
{
    cin >> k;
    for (int i=1; i<=k; i++){
        cin >> n;
        n%=1000000007;
        res+=n*n;
        cout << res << '\n';
        res=0;
    }
    return 0;
}
