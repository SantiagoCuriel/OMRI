#include <iostream>

using namespace std;

 long long int n,cuarto,restpis;
int main()
{
    cin >> n;
    cuarto=n*(n+1)/2;
    restpis=(n-1)*(n-1);
    cout << cuarto+restpis;
    return 0;
}
