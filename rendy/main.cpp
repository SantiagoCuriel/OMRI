#include <iostream>

using namespace std;

int n,m,k,u,v,l,p;
int main()
{
    cin >> n >> m >> k;
    u=n;
    v=m;
    m=((m-1)/k)+1;
    n=((n-1)/k)+1;
    l=u%k;
    p=v%k;
    if (!l){
        l=k;
    }
    if (!p){
        p=k;
    }
    cout << n*m*l*p;
    return 0;
}
