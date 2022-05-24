#include <bits/stdc++.h>

using namespace std;

long long int n,a[200010],t,res,act,visit[200010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n; i++){
            cin >> a[i];
        }
        for (int i=1; i<=n; i++){
            act=i;
            while (act<=n){
                if (!visit[act]){
                    visit[act]++;
                    act+=a[act];
                }else{
                    break;
                }
            }
            act-=i;
            res=max(res,act);
        }
        cout << res << '\n';
        memset(visit,0,sizeof(visit));
        res=0;
        act=0;
    }
    return 0;
}
