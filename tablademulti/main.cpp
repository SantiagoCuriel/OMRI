#include <bits/stdc++.h>

using namespace std;

int n,x,res,it=2;
int main()
{
    cin >> n >> x;
    for (int i=1; i<n; i++){
        for (int j=it; j<=n; j++){
            if (j*i==x){
                cout << j << " " << i << '\n';
                res++;
            }
        }
        it++;
    }
    res*=2;
    if (sqrt(x)*(sqrt(x))==x && sqrt(x)<=n){
        res++;
    }
    cout << res;
    return 0;
}
