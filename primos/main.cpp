#include <bits/stdc++.h>

using namespace std;

int n,a[10000002],m,q;
int main()
{
    cin >> q;

    m=sqrt(10000000);
    for (int i=2; i<=m; i++){
        if (a[i]==0){
            for (int j=i*i; j<=10000000; j+=i){
                a[j]=i;
            }
        }

    }
    for (int i=1; i<=q; i++){
        cin >> n;
        while (1){
            if (a[n]!=0){
                cout << a[n] << " ";
                n/=a[n];
            }else{
                cout << n << '\n';
                break;
            }
        }
    }
    return 0;
}
