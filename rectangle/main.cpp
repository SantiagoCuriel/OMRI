#include <bits/stdc++.h>

using namespace std;

int n,a,b,c,l;
int main()
{
    cin >> n;
    while (n--){
        cin >> a >> b >> c;

        if (a+b==c || a+c==b || b+c==a){
            l++;
        }
        if ((a==b && c%2==0) || (c==b && a%2==0) || (a==c && b%2==0)){
            l++;
        }
        if (l){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
        l=0;
    }
    return 0;
}
