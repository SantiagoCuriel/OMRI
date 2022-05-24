#include <bits/stdc++.h>

using namespace std;

int n,t,a[3010],cub[3010],res;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    for (int i=1; i<=t; i++){
        cin >> n;
        for (int j=1; j<=n; j++){
            cin >> a[j];
        }
        for (int j=1; j<n; j++){
            if (abs(a[j]-a[j+1])<=n){
                cub[abs(a[j]-a[j+1])]++;
            }
        }
        for (int j=1; j<n; j++){
            if (cub[j]==1){
                res++;
                cub[j]=0;
            }
        }
        if (res==n-1){
            cout << "Alegre" << '\n';
        }else{
            cout << "No alegre" << '\n';
        }
        res=0;
    }
    return 0;
}
