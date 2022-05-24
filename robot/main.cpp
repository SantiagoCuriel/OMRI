#include <bits/stdc++.h>

using namespace std;

int n,m,x,y,ex,ey,t;
int main()
{
    cin >> t;
    while (t--){
        cin >> n >> m >> x >> y >> ex >> ey;
        if (ex>=x && ey>=y){
            cout << min(ex-x,ey-y) << '\n';
        }
        if (ex<x && ey>y){
            cout << ey-y << '\n';
        }
        if (ex>x && ey<y){
            cout << ex-x << '\n';
        }
        if (ex<x && ey<y){
            cout <<  << '\n';
        }

    }
    cout << "Hello world!" << endl;
    return 0;
}
