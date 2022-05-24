#include <bits/stdc++.h>

using namespace std;

int n,res,a,it=1;
int main()
{
    cin >> n;
    while (n){
        for (int i=1; i<=n; i++){
            cin >> a;
            if (a){
                res++;
            }else{
                res--;
            }
        }
         cout << "Case " << it << ": " << res << '\n';
        cin >> n;
        res=0;
        it++;
    }
    return 0;
}
