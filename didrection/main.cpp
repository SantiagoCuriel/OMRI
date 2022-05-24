#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
lli t,n,m,res;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n >> m;
        lli d=abs(n-m),mid=d/2;
        if (n==1 ^ m==1){
            if (d>=2){
                cout << -1 << '\n';
            }else{
                cout << 1 << '\n';
            }
        }else{
            lli mn=min(n,m)-1;
            res+=mn+mn;
            if (n!=m){

                res+=mid*4;
                if (mid*2!=d){
                    res++;
                }
            }
            cout << res << '\n';
            res=0;
        }

    }
    return 0;
}
