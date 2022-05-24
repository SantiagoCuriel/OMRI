#include <bits/stdc++.h>

using namespace std;
long long int n,t,a[200010],suma;
bool solucion1(){
    for (int i=1; i<=n; i++){
        suma+=a[i];
    }
    if (suma==a[n+1]){
        for (int i=1; i<=n; i++){
            cout << a[i] << " ";
        }
        return 1;
    }
    return 0;
}
bool solucion2(){
    suma+=a[n+1];
    for (int i=1; i<=n+1; i++){
        if (suma-a[i]==a[n+2]){
            for (int j=1; j<=n; j++){
                if (j!=i){
                    cout << a[j] << " ";
                }
            }
            return 1;
        }
    }
    return 0;
}
void lect(){
    cin >> n;
    for (int i=1; i<=n+2; i++){
        cin >> a[i];
    }
    sort(a+1,a+n+3);
}
int main()
{
    cin >> t;
    while (t--){
        lect();
        if (!solucion1()){
            if (!solucion2()){
                cout << -1;
            }
        }
        cout << '\n';
        suma=0;
    }
    return 0;
}
