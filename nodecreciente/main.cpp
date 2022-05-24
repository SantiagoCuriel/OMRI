#include <bits/stdc++.h>

using namespace std;

int t,n;
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        int act,ant=0,res=0;
        for (int i=1; i<=n; i++){
            cin >> act;
            if (act<ant){
                res++;
            }
            ant=act;
        }
        if (res<=1){
            cout << "true" << '\n';
        }else{
            cout << "false" << '\n';
        }
    }
    return 0;
}
