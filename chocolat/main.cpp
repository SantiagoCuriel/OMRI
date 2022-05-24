#include <bits/stdc++.h>

using namespace std;

long long int n,l,r,k,arre[110],t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n >> l >> r >> k;
        int it=1;
        for (int i=1; i<=n; i++){
            long long int x;
            cin >> x;
            if (x<=r && x>=l){
                arre[it]=x;
                it++;
            }
        }
        sort(arre+1,arre+it);
        int res=0;
        for (int i=1; i<it; i++){
            if (arre[i]<=k){
                k-=arre[i];
                res++;
            }
        }
        cout << res << '\n';
    }
    return 0;
}
