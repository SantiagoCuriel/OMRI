#include <bits/stdc++.h>

using namespace std;

int n,a[150010],t,act,res;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n; i++){
            cin >> a[i];
        }
        act=a[n];
        for (int i=n-1; i>=1; i--){
            if (a[i]<act){
                act=a[i];
            }else{
                res++;
            }
        }
        cout << res <<'\n';
        res=0;
    }
    return 0;
}
