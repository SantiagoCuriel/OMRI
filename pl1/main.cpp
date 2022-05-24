#include <iostream>

using namespace std;
int n, a[1000010],res,q,u,v,w;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    cin >> q;
    for (int i=1; i<=q; i++){
        cin >> u >> v >> w;
        cout<< (a[u]+a[v])*(w==1) + (a[u]-a[v])*(w==2) + (a[u]*a[v])*(w==3) + (a[u]/a[v])*(w==4) << '\n';
    }
    return 0;
}
