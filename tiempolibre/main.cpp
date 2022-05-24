#include <iostream>

using namespace std;

long long int n,res;
int main()
{
    cin >> n;
    n%=1000000007;
    res=(n*(n+1)/2)%1000000007;
    res%=1000000007;
    cout << res;
    return 0;
}
