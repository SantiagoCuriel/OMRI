#include <bits/stdc++.h>

using namespace std;

long long int a,b,suma,sumb;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    a++;
    b++;
    while (a && b){
        cin >> a >> b;
        if (!a && !b){
            break;
        }
        suma=((a-1)*a)/2;
        sumb=((b-1)*b)/2;
        cout << suma*sumb << '\n';
    }
    return 0;
}
