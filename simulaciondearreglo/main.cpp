#include <bits/stdc++.h>

using namespace std;

int t,arre[1010],it,n;
int main()
{
    cin >> t;
    while (t--){
        char x;
        cin >> x >> n;
        if (x=='r'){
            arre[it]=n;
            it++;
        }else{
            cout << arre[n] << '\n';
        }
    }
    return 0;
}
