#include <iostream>

using namespace std;

int n,i=1,f1=1,f2=1,f3=2;
int main()
{
    cin >> n;
    while (f1<=n){
        i++;
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    cout<< i-2;
    return 0;
}
