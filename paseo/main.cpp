#include <iostream>

using namespace std;

int a[100010];
int cuenta,res,n,edificio;
int main()
{
    cin >> n;
    cin >> a[1];
    edificio=a[1];
    for (int i=2; i<=n; i++){
        cin >> a[i];
        edificio=a[i-1];
        if (edificio>a[i]){
            cuenta++;
        }else{
            res=max(res,cuenta);
            cuenta=0;
        }
    }
    res=max(res,cuenta);
    res++;
    cout << res << endl;
    return 0;
}
