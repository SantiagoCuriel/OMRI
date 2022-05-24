#include <bits/stdc++.h>

using namespace std;

int n,arre[5010],res,act;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    int izq=1,der=0;
    while (der<=n){
        if (act+arre[der+1]>=0){
            der++;
            res=max(max(act,act+=arre[der]),res);
        }else{
            act=0;
            der++;
            izq=der+1;
        }
    }
    cout << res;
    return 0;
}
