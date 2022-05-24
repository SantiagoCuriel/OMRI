#include <iostream>

using namespace std;

long long int n,a[10010],l,res,p;
int main()
{
    cin >> n;
    l=n;
    long long int valor=n,it=1;
    while (l){
        valor=l/2+l%2;
        l/=2;
        a[it]=valor;
        it++;
    }
    it--;
    for (int i=it; i>=1; i--){
        res+=(a[i]-a[i+1])*(((i)/2)+i%2);
    }
    cout << res;
    return 0;
}
