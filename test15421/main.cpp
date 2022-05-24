#include <bits/stdc++.h>

using namespace std;

long long int n,m,t,l,u,v,s,a[200010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n+2; i++){
            cin >> a[i];
        }
        sort(a+1,a+n+3);
        for (int i=1; i<=n; i++){
            s+=a[i];
        }
        if (s==a[n+1]){
            for (int i=1; i<=n; i++){
                cout << a[i] << " ";
            }
        }else{
            s+=a[n+1];
            s-=a[n+2];
            if (s!=0){
                for (int i=1; i<=n+1; i++){
                    if (a[i]==s && !u){
                        a[i]=0;
                        u++;
                    }else{
                        v++;
                    }
                }
                if (v==n+1){
                    cout << -1;
                }else{
                    for (int i=1; i<=n+1; i++){
                        if (a[i]!=0){
                            cout << a[i] << " ";
                        }
                    }
                }
            }
        }
        cout << '\n';
        l=0;
        u=0;
        v=0;
        s=0;
    }
    return 0;
}
