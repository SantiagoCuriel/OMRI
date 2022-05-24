#include <iostream>

using namespace std;

long long int n,s,v[1010],f1=1,f2=2,l;
int main()
{
    cin >> n;
    while (f2<=n){
        if (f2%2==0){
            s+=f2;
        }
        l=f1+f2;
        f1=f2;
        f2=l;
    }
    cout << s;
    return 0;
}
