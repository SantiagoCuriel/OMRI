#include <bits/stdc++.h>

using namespace std;

int n,a[100010],l,izq,der;
bool compara(int u,int v){
    return u>v;
}
int apilar(int x){
    int s=n-1;
    for (int i=1; i<=n; i++){
        if (a[i]<(s/x)){
            return 1;
        }
        s--;
    }
    return 0;
}
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    sort (a+1,a+n+1,compara);
    der=n;
    while (izq+1<der){
        int mid=(izq+der)/2;
        l=apilar(mid);
        if (l){
            izq=mid;
        }else{
            der=mid;
        }
    }
    cout << der;
    return 0;
}
