#include <iostream>

using namespace std;

int t;
int main()
{
    cin >> t;
    while (t--){
        long long int u,v;
        cin >> u >> v;
        cout << u*u << " " << -(v*v) << '\n';
    }
    return 0;
}
