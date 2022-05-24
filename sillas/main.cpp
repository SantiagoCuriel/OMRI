#include <bits/stdc++.h>

using namespace std;

long long int a,b,u,v;
int main()
{
    ios_base::sync_with_stdio;
    cin.tie(0);
    a++;
    b++;
    while (a && b){
        cin >> a >> b;
        if (!a && !b){
            break;
        }
        u=((a-1)*a)/2;
        v=((b-1)*b)/2;
        cout << u*v << '\n';
    }
    return 0;
}
