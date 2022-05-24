#include <bits/stdc++.h>

using namespace std;

int n,lt[60010],a,b,res,m;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a >> b;
        lt[a]++;
        lt[b]--;
        m=max(m,b);
    }
    for (int i=1; i<=m; i++){
        lt[i]+=lt[i-1];
        res=max(res,lt[i]);
    }
    cout << res << '\n';
    a=0;
    b=0;
    for (int i=1; i<=m; i++){
        if (lt[i]==res){
            if (lt[i]==lt[i-1] && lt[a]==res){
                b++;
            }
            if (lt[a]!=res){
                a=i;
                b=i;
            }
        }else{
            if (a && b){
                cout << a << " " << b+1 << '\n';
                a=0;
                b=0;
            }
        }
    }
    return 0;
}
