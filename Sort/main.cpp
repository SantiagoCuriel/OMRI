#include <bits/stdc++.h>

using namespace std;
int n;
int arre[1000];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arre[i];
    sort(arre+1,arre+n+1);
    for(int i=1;i<=n;i++)cout<<arre[i]<<" ";
    return 0;
}
