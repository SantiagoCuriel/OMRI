#include <iostream>

using namespace std;

long long int n,m,k;
long long int sumatoria(long long int a){
    return a*(a+1)/2;
}
int main()
{
    cin >> n;
    m=sumatoria(n);
    k=sumatoria(m);
    n=k/m;
    cout << n;
}
