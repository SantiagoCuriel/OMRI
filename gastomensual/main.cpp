#include <iostream>

using namespace std;

int n,m,a[100010],l,s,izq,der;
int barrido(int x){
    int fin=1,in=1,k=0,r=0;
    while (in<=n){
        k+=a[in];
        if (k>x){
            if (a[fin]>x){
                return 0;
            }
            r++;
            k=a[in];
            fin=in;
            in++;
        }else{
            in++;
        }
    }
    if (a[n]>x){
        return 0;
    }
    r++;
    return r<=m;
}
int main()
{
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        der+=a[i];
    }
    while (izq+1<der){
        int mid=(izq+der)/2;
        l=barrido(mid);
        if (l){
            der=mid;
        }else{
            izq=mid;
        }
    }
    cout << der;
    return 0;
}
