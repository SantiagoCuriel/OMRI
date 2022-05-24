#include <bits/stdc++.h>

using namespace std;

int n,q,res,a,b;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n >> q;
    for (int i=1; i<=q; i++){
        cin >> a >> b;
        res=(abs(a-b));
        if (res>n/2){
            res=n-res;
        }
        cout << res << '\n';
        res=0;
    }
    return 0;
}
