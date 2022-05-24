#include <bits/stdc++.h>

using namespace std;

int a,b,k;
int main()
{
    cin >> a >> b >> k;
    a=abs(a-b);
    if (a-b<k){
        cout << a-b << '\n' << "Si";
    }else{
        cout << a-b << '\n' << "No";
    }
    return 0;
}
