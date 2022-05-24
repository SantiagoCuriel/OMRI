#include <bits/stdc++.h>

using namespace std;

int n,a[100010],k,l;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    cin >> k;
    sort(a+1,a+n+1);
    for (int i=1; i<=n; i++){
        int izq=0,der=n+1;
        while (izq+1<der){
            int mid=(izq+der)/2;
            if (a[i]+a[mid]<k){
                izq=mid;
            }else{
                der=mid;
            }
        }
        if (a[i]+a[der]==k){
            if (i==der){
                if (a[i]+a[der+1]==k){
                    cout << "YES";
                    return 0;
                }
            }else{
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
