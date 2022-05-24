#include <iostream>

using namespace std;

long long int n,k,q,arre[1000010],di[1000010],mx,res,act;
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
    for (int i=1; i<=n; i++){
        for (int j=i; j<=n; j++){
            if (di[arre[j]]>=q){
                act++;
            }
            if (act==k){
                res++;
            }
            if (act>k){
                break;
            }
        }
        act=0;
    }
    cout << res;
    return 0;
}
