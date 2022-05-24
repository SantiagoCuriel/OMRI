#include <bits/stdc++.h>

using namespace std;

long long int n,k,arre[100010],act,res;
int main()
{
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
        if (i<=k){
            act+=arre[i];
        }
    }
    res=act;
    int izq=2,der=k+1;
    while (der<=n){
        act-=arre[izq-1];
        act+=arre[der];
        der++;
        izq++;
        res=max(res,act);
    }
    cout << res;
    return 0;
}
