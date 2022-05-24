#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
lli n,arre[5010],res=INT_MAX*INT_MAX,p;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    for (int i=1; i<=n; i++){
        lli ant=0;
        for (int j=i-1; j>=1; j--){
            ant+=arre[j]-ant%arre[j];
            p+=ant/arre[j];
        }
        ant=0;
        for (int j=i+1; j<=n; j++){
            ant+=arre[j]-ant%arre[j];
            p+=ant/arre[j];
        }
        res=min(res,p);
        p=0;
    }
    cout << res;
    return 0;
}
