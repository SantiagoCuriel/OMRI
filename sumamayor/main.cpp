#include <bits/stdc++.h>

using namespace std;

int n,arre[100010],res,res2,act,l;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    for (int i=n; i>=1; i--){
        arre[i]+=max(arre[i+3],arre[i+2]);
    }
    cout << max(arre[1],arre[2]);
    return 0;
}
