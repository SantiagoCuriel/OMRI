#include <bits/stdc++.h>

using namespace std;

int t,n,arre[200010];
bool compara(int u, int v){
    if (u>v){
        return true;
    }
    return false;
}
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<n; i++){
            int x;
            cin >> x;
            arre[x]++;
        }
        arre[0]++;
        sort(arre+0,arre+n,compara);
        int m=0;
        while (arre[m]){
            m++;
        }
        m--;
        int res=m;
        if ((arre[0]-max(m,arre[1]-1))/2>=0){
        }
    }
    return 0;
}
