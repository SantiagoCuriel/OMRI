#include <bits/stdc++.h>

using namespace std;

long long int n,l,r,b;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while (n--){
        cin >> l >> r;
        b=(r/2)+1;
        if (l>b){
            cout << r%l << '\n';
        }else{
            cout << r%b << '\n';
        }
        b=0;
    }
    return 0;
}
