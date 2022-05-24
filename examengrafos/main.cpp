#include <bits/stdc++.h>

using namespace std;

int n,arre[100010],cd[100010],ci[100010],ud[100010],ui[100010];
long long int res;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int u=0,c=0;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
        if (arre[i]){
            u++;
            ui[i]=c;
        }else{
            c++;
            ci[i]=u;
        }
    }
    u=0;
    c=0;
    for (int i=n; i>=1; i--){
        if (arre[i]){
            u++;
            ud[i]=c;
        }else{
            c++;
            cd[i]=u;
        }
    }
    for (int i=1; i<=n; i++){
        res+=(ui[i]*ud[i])%1000000007;
        res+=(ci[i]*cd[i])%1000000007;
        res%=1000000007;
    }
    cout << res;
    return 0;
}
