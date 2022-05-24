#include <bits/stdc++.h>

using namespace std;
int n,a,c,x[10010],res,actual;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a >> c;
        for (int j=1; j<=c; j++){
            cin >> x[j];
            x[j]=a-x[j];
            if (x[j]>x[j-1]){
                res+=x[j]-x[j-1];
            }
        }
        cout << res << '\n';
        res=0;
    }
    return 0;
}
