#include <bits/stdc++.h>

using namespace std;

int a,b,c,d;
int main()
{
    cin >> a >> b >> c >> d;
    while (a || b || c || d){
        int res=1080;
        if (b>a){
            res+=(a+(40-b))*9;
        }else{
            res+=(a-b)*9;
        }
        res+=(((40-b)+c)*9)%360;
        res+=(((40-d)+c)*9)%360;
        cout << res << '\n';
        cin >> a >> b >> c >> d;
    }
    return 0;
}
