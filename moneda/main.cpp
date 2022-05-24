#include <bits/stdc++.h>

using namespace std;

long long int n,arre[100010],s,mx;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    sort(arre+1,arre+n+1);
    for (int i=1; i<=n; i++){
        if (arre[i]<=s+1){
            s+=arre[i];
        }else{
            cout << s+1;
            return 0;
        }
    }
    cout << s+1;
    return 0;
}
