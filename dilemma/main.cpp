#include <bits/stdc++.h>

using namespace std;

int t,n,m,a[10][30];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n >> m;
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                cin >> a[i][j];
            }
        }
        int bandera=0;
        for (int i=1; i<=m; i++){
            int uni=0;
            for (int j=1; j<=n; j++){
                if (a[j][i]){
                    uni++;
                }
            }
            if (uni!=2){
                bandera++;
                break;
            }
        }
        if (bandera){
            cout << "No" << '\n';
        }else{
            cout << "Yes" << '\n';
        }
    }

    return 0;
}
