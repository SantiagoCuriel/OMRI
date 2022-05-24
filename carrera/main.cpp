#include <bits/stdc++.h>

using namespace std;

int n,t,arre[100010],res=INT_MAX;
int main()
{
    cin >> n >> t;
    for (int i=1; i<=t; i++){
        cin >> arre[i];
    }
    sort(arre+1,arre+t+1);
    for (int i=1; i<=t-n+1; i++){
        res=min(res,arre[i+n-1]-arre[i]);
    }
    cout << res;
    return 0;
}
