#include <bits/stdc++.h>

using namespace std;

int n,a[10010],raiz;
int main()
{
    cin >> n;
    raiz=sqrt(n);
    for (int i=2; i<=raiz; i++){
        if (!a[i]){
            for (int j=i*i; j<=n; j+=i){
                a[j]=i;
            }
        }
    }
    for (int i=2; i<=n; i++){
        if (!a[i]){
            cout << i << " ";
        }
    }
    return 0;
}
