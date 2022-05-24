#include <bits/stdc++.h>

using namespace std;

int n,k,arre[100010],res=INT_MAX,act;
int main()
{
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    int izq=1,der=0;
    while (der<=n){
        if (act<k){
            der++;
            act+=arre[der];
        }else{
            res=min(res,der-izq+1);
            act-=arre[izq];
            izq++;

        }
    }
    while (act>k){
        act-=izq;
        izq++;
        res--;
    }
    cout << res;
    return 0;
}
