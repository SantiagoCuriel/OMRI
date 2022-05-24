#include <iostream>

using namespace std;

long long int n=1,m=2,l;
int main()
{
    for (int i=2; i<=100000; i++){
        l=m%1000000007;
        m=((n%1000000007)+(m%1000000007))%1000000007;
        n=l%1000000007;
        n%=1000000007;
    }
    cout << n%1000000007;
    return 0;
}
