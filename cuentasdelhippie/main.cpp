#include <bits/stdc++.h>

using namespace std;

int n,c,a[30010],res=INT_MAX,actual,cola,cabeza=-1,negras,blancas;
int main()
{
    cin >> c >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    while (cola<=n){
        if (negras<c){
            cabeza++;
            if (a[cabeza%n]==1){
                blancas++;
            }else{
                negras++;
            }
        }
        if (negras==c){
            cola++;
            res=min(res,blancas);
            if (a[cola-1]==1){
                blancas--;
            }else{
                negras--;
            }
        }
    }
    cout << res << endl;
    return 0;
}
