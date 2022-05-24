#include <bits/stdc++.h>

using namespace std;

long long int n,a[200010],l,t,suma;
void lect(){
    cin >> n;
    for (int i=1; i<=n+2; i++){
        cin >> a[i];
    }
    sort(a+1,a+n+3);
    for (int i=1; i<=n; i++){
        suma+=a[i];
    }
    if  (suma==a[n+1] || suma==a[n+2]){
        for (int i=1; i<=n; i++){
            cout << a[i] << " ";
        }
        suma=0;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        lect();
        if (suma){
            suma+=a[n+1];
            for (int i=1; i<=n+1; i++){
                if (suma-a[i]==a[n+2]){
                    for (int j=1; j<=n+1; j++){
                        if (j!=i){
                            cout << a[j] << " ";
                        }
                    }
                    l++;
                    break;
                }
            }
        }
        if (!l && suma){
            cout << -1;
        }
        cout << '\n';
        l=0;
        suma=0;
    }
    return 0;
}
