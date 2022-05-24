#include <bits/stdc++.h>

using namespace std;

long long int n,a[1010],s,l,res,t;
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n; i++){
            cin >> a[i];
            s+=a[i];
        }
        sort(a+1,a+n+1);
        if (s%n==0){
            s/=n;
            for (int i=n; i>=1; i--){
                if (a[i]<=s){
                    res=n-i;
                    break;
                }
            }
        }else{
            l++;
            cout << -1 << '\n';
        }
        if (!l){
            if (res==n){
                cout << 0 << '\n';
            }else{
                cout << res << '\n';
            }
        }
        l=0;
        res=0;
        s=0;
    }
    return 0;
}
