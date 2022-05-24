#include <bits/stdc++.h>

using namespace std;
int n,t,p[110],k;
string b,d,a,c,m,x;
int ao;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c;
    cout << b[0];
    t=b.size();
    for (int i=1; i<t; i++){
        if (b[i]=='A' || b[i]=='E' || b[i]=='I' || b[i]=='O' || b[i]=='U'){
            cout << b[i];
            break;
        }
    }
    cout << c[0] << a[0];
    cin >> d >> m >> ao;
    cout << ao%100 << m << d;//JUAN PEREZ GONZALEZ 23 04 1998
    return 0;
}
