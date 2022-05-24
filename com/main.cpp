#include <bits/stdc++.h>

using namespace std;
int n,a[100000],b[100000],c,x,l;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    for (int i=1; i<=n; i++){
        cin >> b[i];
    }
    cin >> x;
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    c=n;
    for (int i=1; i<=n; i++){
        if (a[i]+b[c]<=x){
            l++;
        }
        c--;
    }
    if (l==n){
        cout << "Si";
    }else{
        cout << "No";
    }
    return 0;
}
