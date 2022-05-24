#include <bits/stdc++.h>

using namespace std;

int n,a[1000010],res,l;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        if (a[i]==a[1]){
            l++;
        }
    }
    res++;
    if (l==n){
        res=n;
    }
    cout << res;
    return 0;
}
