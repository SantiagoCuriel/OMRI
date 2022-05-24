#include <bits/stdc++.h>

using namespace std;

int n,arre[500010],visit[500010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    visit[1]++;
    for (int i=1; i<=n; i++){
        if (visit[i]){
            for (int j=1; j<=arre[i] && i+j<=n; j++){
                visit[i+j]++;
            }
        }
    }
    if (visit[n]){
        cout << "POSIBLE";
    }else{
        cout << "IMPOSIBLE";
    }
    return 0;
}
