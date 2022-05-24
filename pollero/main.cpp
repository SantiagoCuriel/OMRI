#include <bits/stdc++.h>

using namespace std;

int n,m,arre[20010],res;
int main()
{
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    sort(arre+1,arre+n+1);
    for (int i=1; i<n; i++){
        for (int j=i+1; j<=n; j++){
            if (arre[i]+arre[j]<=m){
                res++;
            }
        }
    }
    cout << res;
    return 0;
}
