#include <bits/stdc++.h>

using namespace std;

int n,a[100010],act,res;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        if (a[i]<a[i-1]){
            act++;
        }else{
            res=max(res,act);
            act=0;
        }
    }
    res=max(res,act);
    cout << res+1;
    return 0;
}
