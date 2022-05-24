#include <bits/stdc++.h>

using namespace std;

long long int n,t,a[60],b[60],mina=INT_MAX,minb=INT_MAX,res;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n; i++){
            cin >> a[i];
            mina=min(mina,a[i]);
        }
        for (int i=1; i<=n; i++){
            cin >> b[i];
            minb=min(minb,b[i]);
        }
        for (int i=1; i<=n; i++){
            res+=max(a[i]-mina,b[i]-minb);
        }
        cout << res << '\n';
        mina=INT_MAX;
        minb=INT_MAX;
        res=0;
    }

    return 0;
}
