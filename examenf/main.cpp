#include <bits/stdc++.h>

using namespace std;

long long int n,a[100010],k,l,res,s;
int main()
{
    cin >> n;
    for (int i=1; i<=n+2; i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    for (int i=1; i<=n; i++){
        s+=a[i];
    }
    if (s==a[n+1] || s==a[n+2]){
        for (int i=1; i<=n; i++){
            cout << a[i] << " ";
        }
        return 0;
    }
    s+=a[n+1];
    for (int i=1; i<=n+1; i++){
        if (s-a[n+2]==a[i]){
            l++;
            break;
        }
    }
    if (l){
        l--;
        for (int i=1; i<=n+1; i++){
            if (s-a[n+2]==a[i] && l==0){
                l++;
            }else{
                cout << a[i] << " ";
            }
        }
    }else{
        cout << -1;
    }
    return 0;
}
