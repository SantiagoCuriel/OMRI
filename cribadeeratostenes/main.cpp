#include <bits/stdc++.h>

using namespace std;

int n,x,res;
int main()
{
    cin >> n >> x;
    for (int i=1; i<=n; i++){
        if (x%i==0){
            res++;
        }
    }
    cout << res;
    return 0;
}
