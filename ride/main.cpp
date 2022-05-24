#include <bits/stdc++.h>

using namespace std;

int t,h,l,a[10010],alt,res;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> h >> l;
        alt=h;
        for (int i=1; i<=l; i++){
            cin >> a[i];
            if (a[i]<alt){
                res+=alt-a[i];
            }
            alt=a[i];
        }
        cout << res << '\n';
        res=0;

    }
    return 0;
}
