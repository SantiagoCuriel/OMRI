#include <bits/stdc++.h>

using namespace std;
int p,h,u,d,u2,d2;
int main()
{
    cin >> p >> h >> u >> d >> u2 >> d2;
    while (h>0){
        p+=h;
        if (d==h){
            p-=u;
        }
        if (d2==h){
            p-=u2;
        }
        if (p<0){
            p=0;
        }
        h--;
    }
    cout << p;
    return 0;
}
