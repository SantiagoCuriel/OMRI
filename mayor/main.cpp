#include <iostream>

using namespace std;

int n,a[100010],act,l=1,k=1,in,fin;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    in=1;
    fin=1;
    while (in<n){
        if (a[in+1]>=a[in]){
            in++;
        }else{
            in++;
            fin=in;
        }
        act=in-fin+1;
        if (l-k+1<=in-fin+1){
            l=in;
            k=fin;
        }
    }
    cout << k << " " << l;
    return 0;
}
