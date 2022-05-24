#include <bits/stdc++.h>

using namespace std;

int t,k,m,n,a[110],b[110],s,ita,itb,l;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> k >> n >> m;
        a[n+1]=INT_MAX;
        b[m+1]=INT_MAX;
        s=k;
        ita=1;
        itb=1;
        l=0;
        for (int i=1; i<=n; i++){
            cin >> a[i];
        }
        for (int i=1; i<=m; i++){
            cin >> b[i];
        }
        while (ita<=n || itb<=m){
            if (a[ita]<=b[itb]){
                if (a[ita]==0){
                    s++;
                    ita++;
                }else{
                    if (a[ita]<=s){
                        ita++;
                    }else{
                        l=1;
                        break;
                    }
                }
            }else{
                if (a[ita]>b[itb]){
                    if (b[itb]==0){
                        s++;
                        itb++;
                    }else{
                        if (b[itb]<=s){
                            itb++;
                        }else{
                            l=1;
                            break;
                        }
                    }
                }else{
                    l=1;
                    break;
                }
            }
        }
        ita=1;
        itb=1;
        if (!l){
            while (ita<=n || itb<=m){
                if (a[ita]<=b[itb]){
                    cout << a[ita] << " ";
                    ita++;
                }else{
                    if (a[ita]>b[itb]){
                        cout << b[itb] << " ";
                        itb++;
                    }
                }
            }
        }else{
            cout << -1;
        }
        cout << '\n';
    }
    return 0;
}
