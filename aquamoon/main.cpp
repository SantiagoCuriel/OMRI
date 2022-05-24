#include <bits/stdc++.h>

using namespace std;

int n,t,a[110],b[110];
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        int suma=0,sumb=0,res=0;
        for (int i=1; i<=n; i++){
            cin >> a[i];
            suma+=a[i];
        }
        for (int i=1; i<=n; i++){
            cin >> b[i];
            sumb+=b[i];
        }
        if (suma==sumb){
            for (int i=1; i<=n; i++){
                if (a[i]>b[i]){
                    res+=a[i]-b[i];
                }
            }
            cout << res << '\n';
            for (int i=1; i<=n; i++){
                while (a[i]>b[i]){
                    for (int j=i+1; j<=n; j++){
                        if (a[j]<b[j]){
                            cout << i << " " << j << '\n';
                            a[i]--;
                            a[j]++;
                        }
                    }
                }
                while (a[i]<b[i]){
                    for (int j=i+1; j<=n; j++){
                        if (a[j]>b[j]){
                            cout << j << " " << i << '\n';
                            a[j]--;
                            a[i]++;
                        }
                    }
                }
            }
        }else{
            cout << -1 << '\n';
        }
    }
    return 0;
}
