#include <iostream>

using namespace std;

long long int t,n,a,b;
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        a+=n/3;
        b+=n/3;
        n%=3;
        if (n==1){
            a++;
        }
        if (n==2){
            b++;
        }
        cout << a << " " << b << '\n';
        a=0;
        b=0;
    }
    return 0;
}
