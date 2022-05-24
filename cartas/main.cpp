#include <bits/stdc++.h>

using namespace std;

int n,arre[100010],visit[100010],act,res,l;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    int izq=1,der=0;
    while (der<=n){
        if (!l){
            der++;
            visit[arre[der]]++;
            if (visit[arre[der]]==2){
                l++;
            }else{
                if (der<=n){
                    res=max(res,der-izq+1);
                }
            }
        }else{
            visit[arre[izq]]--;
            if (visit[arre[izq]]==1){
                l--;
            }
            izq++;
        }
    }
    der--;
    res=max(res,der-izq+1);
    cout << res;
    return 0;
}
