#include <iostream>

using namespace std;

int n,k,a[100010],c[100010],l,res,act;
int main()
{
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        if (a[i]<=k){
            c[a[i]]++;
        }
        if (c[a[i]]==1){
            l++;
        }
    }

    if (l==k){
        res=n;
        int izq=1,der=n;
        while (1){
            if (c[a[izq]]!=1){
                c[a[izq]]--;
                izq++;
                res--;
            }else{
                if (c[a[der]]!=1){
                    c[a[der]]--;
                    der--;
                    res--;
                }else{
                    cout << res;
                    return 0;
                }
            }
        }
    }
    cout << -1;
    return 0;
}
/*
10 5
1 1 1 1 1 1 1 1 1 1
*/
