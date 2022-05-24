#include <bits/stdc++.h>

using namespace std;

long long int t,h,n,arre[1010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n >> h;
        for (int i=1; i<=n; i++){
            cin >> arre[i];
        }
        sort(arre+1,arre+n+1);
        int res=h/(arre[n]+arre[n-1]);
        res*=2;
        h%=(arre[n]+arre[n-1]);
        if (h>arre[n]){
            h=0;
            res+=2;
        }
        if (h<=arre[n] && h>0){
            res++;
        }
        cout << res << '\n';
    }
    return 0;
}
