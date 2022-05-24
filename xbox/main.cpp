#include <bits/stdc++.h>

using namespace std;
int n,x,acum,res;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>x;
        acum+=x;
        acum=max(0,acum);
        res=max(acum,res);
    }
    cout<<res;
    return 0;
}
