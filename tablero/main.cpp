#include <bits/stdc++.h>

using namespace std;

long long int n,m;
int main()
{
    cin >> n >> m;
    n%=m;
    cout << (((n)*(n-1)/2)%m)*((n)+(n))%m;
    return 0;
}
