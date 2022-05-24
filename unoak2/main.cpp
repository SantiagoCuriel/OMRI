#include <bits/stdc++.h>

using namespace std;

int n,a[100010],k,res,act;
int c[100002];
int main()
{
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    int izq=1,der=0;
    while (der<n){
        if(act==0){
            der++;
            if(a[der]<=k){
                act++;
            }
        }else{
            res=max(res,(der-izq)+1);
            izq=der+1;
            act--;
        }
    }
    res=max(res,(der-izq)+1);

    if (der>n){
        cout << -1;
    }else{
        cout << res;
    }
    return 0;
}
