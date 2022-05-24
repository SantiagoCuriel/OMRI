#include <bits/stdc++.h>

using namespace std;

long long int n,m,columna,fila,pocol=1,pofil=1,res;
int main()
{
    cin >> n >> m;
    for (int i=1; i<=m; i++){
        cin >> columna >> fila;
        res+=abs(pocol-columna);
        pocol=columna;
        res+=abs(pofil-fila);
        pofil=fila;
    }
    cout << res << endl;
    return 0;
}
