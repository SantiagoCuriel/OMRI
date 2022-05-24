#include <bits/stdc++.h>

using namespace std;
string n,m;
int l,r;
int main()
{    cin>>n;
    l=n.size();
    l-=1;
    for (int i=l; i>=0; i--){
        m+=n[i];
    }
    if (n==m){
        cout<< "si";
    }else{
        cout << "no";
    }
    return 0;
}
