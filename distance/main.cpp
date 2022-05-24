#include <bits/stdc++.h>

using namespace std;

int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        int x,y;
        cin >> x >> y;
        if ((x+y)%2){
            cout << -1 << " " << -1 << '\n';
        }else{
            if (x>y){
                cout << (x+y)/2 << " " << 0 << '\n';
            }else{
                cout << 0 << " " << (x+y)/2 << '\n';
            }
        }
    }
    return 0;
}
