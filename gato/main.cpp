#include <bits/stdc++.h>

using namespace std;

long long int n,a,suma,maximo;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a;
        maximo=max(a,maximo);
        suma+=a;
    }
    a=suma/maximo;
    if (suma%maximo){
        a++;
    }
    cout << a;
    return 0;
}
