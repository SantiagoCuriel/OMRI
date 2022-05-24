#include <iostream>

using namespace std;

long long int n,m,mn,mx,l,k,x;
int main()
{
    cin >> n >> m;
    mx=n-(m);
    mx=mx*(mx+1)/2;
    l=n/m;
    x=n%m;
    k=m-x;
    mn=(l*(l-1)/2)*k;
    mn+=((l+1)*(l)/2)*x;
    cout << mn << " " << mx;
    return 0;
}
