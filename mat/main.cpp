#include <iostream>

using namespace std;

int a[110][110],n,m,k,u,v,res,l;
int main()
{
    cin >> n >> m >> k;
    for (int i=1; i<=k; i++){
        cin >> u >> v;
        a[u][v]++;
    }
    for (int i=1; i<n; i++){
        for (int j=1; j<m; j++){
            l=a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
            if (!l){
                res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}
