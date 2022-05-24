#include <bits/stdc++.h>

using namespace std;

int n,arre[100010],resist[100010];
bool compara(int u,int v){
    if (v<u){
        return true;
    }
    return false;
}
int cajas(int x){
    for (int i=1; i<=x; i++){
        resist[i]=arre[i];
        for (int j=x+i; j<=n; j+=x){
            resist[i]--;
            resist[i]=min(resist[i],arre[j]);
            if (resist[i]==-1){
                return 0;
            }
            //cout << resist[i] << " ";
        }
        //cout << '\n';
    }
    return 1;
}
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    sort(arre+1,arre+n+1,compara);
    int izq=0,der=n;
    while (izq+1<der){
        int mid=(izq+der)/2;
        int l=cajas(mid);
        if (l){
            der=mid;
        }else{
            izq=mid;
        }
    }
    cout << der;
    return 0;
}
