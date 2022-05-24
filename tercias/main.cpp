#include <bits/stdc++.h>

using namespace std;

long long int n,arre[7010],res;
void barrido(int x){
    long long int a=x-1,c=x+1;
    while (a>=1 && c<=n){
        if (arre[x]-arre[a]<arre[c]-arre[x]){
            a--;//Mueve la ventana a la izquierda
        }else{
            if (arre[x]-arre[a]>arre[c]-arre[x]){
                c++;//Mueve la ventana a la derecha
            }else{
                res++;//encuantra una tercia
                a--;//Mueve la ventana a la izquierda
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    for (int b=2; b<=n-1; b++){
        barrido(b);
    }
    cout << res;
    return 0;
}
