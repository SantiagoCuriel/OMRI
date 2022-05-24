#include <bits/stdc++.h>

using namespace std;

int n,m,k,visit[100010],inf[100010],vec[100010];
vector <int> arre[100010];
void busqueda(int x){
    if (visit[x]){
        return;
    }
    visit[x]++;
    int r=0;
    for (int vecino: arre[x]){
        busqueda(vecino);
    }
    return;
}
int main()
{
    cin >> n >> m >> k;
    for (int i=1; i<=k; i++){
        cin >> inf[i];
    }
    for (int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;
        arre[a].push_back(b);
    }
    for (int i=1; i<=k; i++){
        busqueda(inf[i]);
        vec[inf[i]]++;
        for (int vecino: arre[inf[i]]){
            vec[vecino]++;
        }
    }
    int res=0;

    for (int i=1; i<=n; i++){
        if (vec[i]){
            res++;
        }
    }
    cout << res << " ";
    res=0;
    for (int i=1; i<=n; i++){
        if (visit[i]){
            res++;
        }
    }
    cout << res;
    return 0;
}
