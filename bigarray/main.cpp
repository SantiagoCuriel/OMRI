#include <bits/stdc++.h>

using namespace std;

int n,t,arre[110],res,mn=INT_MAX;
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n; i++){
            cin >> arre[i];
            if (arre[i]==mn){
                res++;
            }
            if (arre[i]<mn){
                mn=arre[i];
                res=1;
            }
        }
        cout << n-res << '\n';
        res=1;
        mn=INT_MAX;

    }
    cout << "Hello world!" << endl;
    return 0;
}
