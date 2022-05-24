#include <bits/stdc++.h>

using namespace std;

int n,l,act,res;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> l;
        if (l<0){
            if (act+l>=0){
                act+=l;
            }else{
                res=max(res,act);
                act=0;
            }
        }else{
            act+=l;
        }
        res=max(res,act);
    }
    cout << res;
    return 0;
}
