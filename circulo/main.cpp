#include <bits/stdc++.h>

using namespace std;

int q,a,b,c,d,mid;
int main()
{
    cin >> q;
    while (q--){
        cin >> a >> b >> c;
        mid=abs(a-b);
        if (c<=mid*2 && a<=mid*2 && b<=mid*2 && c+mid!=a && c+mid!=b){
            c+=mid;
            if (c>mid*2){
                c%=mid*2;
            }
            cout << c << '\n';
        }else{
            cout << -1 << '\n';
        }
    }
    return 0;
}
