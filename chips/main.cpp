#include <bits/stdc++.h>

using namespace std;

int n,a[110],p,ip;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        if (a[i]%2){
            p++;
        }else{
            ip++;
        }
    }
    if (p>=ip){
        cout << ip;
    }else{
        cout << p;
    }

    return 0;
}
