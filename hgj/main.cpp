#include <iostream>

using namespace std;

int n,nf=4,f1=2,f2=3,f3;
int main()
{
    cin >> n;
    while (nf<n){
        f3=f1+f2;
        nf=f1+1;
        while (nf<f2 && nf<=n){
            cout<< nf << " ";
            nf++;
        }
        f1=f2;
        f2=f3;
    }
    return 0;
}
