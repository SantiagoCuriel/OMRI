#include <bits/stdc++.h>

using namespace std;

int n,a[110],l,k,act;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    act=abs(a[1]-a[2]);
    for (int i=1; i<n; i++){
        if (abs(a[i]-a[i+1])<=act){
            act=abs(a[i]-a[i+1]);
            l=i;
            k=i+1;
        }
    }
    if (abs(a[n]-a[1])<=act){
        act=abs(a[n]-a[1])<=act;
        l=n;
        k=1;
    }
    cout << l << " " << k;
    return 0;
}
