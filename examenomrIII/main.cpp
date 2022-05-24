#include <bits/stdc++.h>

using namespace std;

long long int n,m,res;
int main()
{
    n++;
    while (n){
        cin >> n >> m;
        cout << __gcd(n,m) << "\n";
    }
    return 0;
}
