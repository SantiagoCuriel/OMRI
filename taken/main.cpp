#include <iostream>

using namespace std;

long long int n,m,res;
int main()
{
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        res+=m;
        m+=n+1;
    }
    cout << res << endl;
    return 0;
}
