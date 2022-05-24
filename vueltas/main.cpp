#include <bits/stdc++.h>

using namespace std;
int n,m,a[1010][1010],f,c,k;
char q;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    cin >> k;
    f=m;
    c=1;
    while (k--){
        cin >> q;
        if (q=='H'){
            if (c==1){
                c=n;
            }else{
                c=1;
            }
        }else{
            if (f==1){
                f=m;
            }else{
                f=1;
            }
        }
    }
    if (f==m && c==1){
        for (int i=1; i<=m; i++){
            for (int j=1; j<=n; j++){
                cout << a[i][j] << " ";
            }
            cout << '\n';
        }
        return 0;
    }
    if (f==1 && c==n){
        for (int i=m; i>=1; i--){
            for (int j=n; j>=1; j--){
                cout << a[i][j] << " ";
            }
            cout << '\n';
        }
        return 0;
    }
    if (f==m && c==n){
        for (int i=1; i<=m; i++){
            for (int j=n; j>=1; j--){
                cout << a[i][j] << " ";
            }
            cout << '\n';
        }
        return 0;
    }
    return 0;
}
