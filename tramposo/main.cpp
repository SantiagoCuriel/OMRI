#include <bits/stdc++.h>

using namespace std;

int n,arre[250010],s,l;
int main()
{
    cin >> n;
    for (int i=1; i<=n+2; i++){
        cin >> arre[i];
    }
    sort(arre+1,arre+n+3);
    for (int i=1; i<=n; i++){
        s+=arre[i];
    }
    if (arre[n+1]==s || arre[n+2]==s){
        for (int i=1; i<=n; i++){
            cout << arre[i] << " ";
        }
        return 0;
    }
    s+=arre[n+1];
    for (int i=1; i<=n; i++){
        if (s-arre[i]==arre[n+2]){
            arre[i]=0;
            l++;
            break;
        }
    }
    if (l){
        for (int i=1; i<=n+1; i++){
            if (arre[i]){
                 cout << arre[i] << " ";
            }
        }
    }else{
        cout << -1;
    }
    return 0;
}
