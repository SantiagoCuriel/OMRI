#include <bits/stdc++.h>

using namespace std;

long long int n,t,arre[60],res,mov[4][10000],m;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        m=1;
        for (int i=1; i<=n; i++){
            cin >> arre[i];
        }
        int der=n,it;
        while (der){
            for (int i=1; i<der; i++){
                if (arre[i]>arre[i+1]){
                    long long int c=arre[i];
                    arre[i]=arre[i+1];
                    arre[i+1]=c;
                    mov[1][m]=i;
                    mov[2][m]=i+1;
                    mov[3][m]=1;
                    m++;
                }
            }
            der--;
        }
        cout << m-1 << '\n';
        for (int i=1; i<m; i++){
            cout << mov[1][i] << " " << mov[2][i] << " " << mov[3][i] << '\n';
        }
        m=1;
    }
    return 0;
}
