#include <bits/stdc++.h>

using namespace std;

int n,arre[1000010],fin;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i-fin];
        if (arre[i-fin]<0){
            fin++;
        }
    }
    sort(arre+1,arre+n-fin+1);
    for (int i=1; i<=n; i++){
        if (arre[i]-1>arre[i-1]){
            cout << arre[i-1]+1;
            return 0;
        }
    }
    cout << arre[n-fin]+1;
    return 0;
}
