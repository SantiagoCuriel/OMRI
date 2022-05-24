#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,arre[1010],res=0,visit[1010];
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    int izq=1,der=0,l=0;
    while (der<=n){
        if (!l){
            res=max(res,der-izq+1);
            der++;
            visit[der]++;
            if (visit[der]==2){
                l++;
            }
        }else{
            while (l){
                visit[izq]--;
                if (visit[izq]==1){
                    l--;
                }
                izq++;
            }
        }
    }
    cout << res;
    return 0;
}
