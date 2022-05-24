#include <bits/stdc++.h>

using namespace std;

int n,t,v[300],l;
string a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n >> a;
        for (int i=0; i<n; i++){
            if (v[a[i]] && a[i]!=a[i-1]){
                l++;
                break;
            }
            v[a[i]]++;
        }
        if (l){
            cout << "NO" << '\n';
        }else{
            cout << "YES" << '\n';
        }
        l=0;
        memset(v,0,sizeof(v));
    }
    return 0;
}
