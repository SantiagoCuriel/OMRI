#include <iostream>

using namespace std;
int x,n,y,w;
int e=1;
int main()
{
    cin>> x >> n;
    y=x;
    w=0;
    while (w<n){
        e=e*x;
        x%1000000007;
        w++;
    }
    cout<<e;
    return 0;
}
