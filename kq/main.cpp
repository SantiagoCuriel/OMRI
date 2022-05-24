#include <bits/stdc++.h>

using namespace std;

long long int n,k,q,arre[1000010],di[1000010],mx,res;
int main()
{

    cin >> n >> k >> q;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
        if (arre[i]>mx){
            mx=arre[i];
        }
    }
    for (int i=1; i<=mx; i++){
        for (int j=i; j<=mx; j+=i){
            di[j]++;
        }
    }
    int izq=1,der=0,act=0;
    while (izq<=n){
        if (act<=k && der<n){
            der++;
            if (di[arre[der]]>=q){
                act++;
                //cout << di[arre[der]] << "\n";
            }
            if (act==k){
                res++;
            }
        }else{

            if (di[arre[izq]]>=q){
                act--;
            }
            if (act==k){
                res++;
            }
            izq++;
        }
    }
    if (act==k){
        res++;
    }
    cout << res;
    return 0;
}
