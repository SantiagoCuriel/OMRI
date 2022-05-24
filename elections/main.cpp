#include <bits/stdc++.h>

using namespace std;

long long int n,a,b,c,mx,l;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while (n--){
        cin >> a >> b >> c;
        mx=max(a,max(b,c));
        if (a==mx){
            l++;
        }
        if (b==mx){
            l++;
        }
        if (c==mx){
            l++;
        }
        if (a==mx && l>1){
            a--;
        }
        if (b==mx && l>1){
            b--;
        }
        if (c==mx && l>1){
            c--;
        }
        a=mx-a;
        b=mx-b;
        c=mx-c;
        if (a!=0 && a!=0){
            a++;
        }
        if (b!=0 && b!=0){
            b++;
        }
        if (c!=0&& c!=0){
            c++;
        }
        cout << a << " " << b << " " << c << " " << '\n';
        l=0;
    }
    return 0;
}
