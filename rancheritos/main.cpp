#include <bits/stdc++.h>

using namespace std;
int n;
long long int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        if (n%2==0 && n!=0){
            n--;
        }
        n/=2;
        cout << n << '\n';
        n=0;
    }
    return 0;
}
