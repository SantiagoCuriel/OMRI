#include <bits/stdc++.h>

using namespace std;

int n,m,k,inf[100010],cubeta[100010];
vector <int> adj[100010];
int main()
{
    cin >> n >> m >> k;
    for (int i=1; i<=k; i++){
        cin >> inf[i];
    }
    for (int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    for (int i=1; i<=k; i++){
        cubeta[inf[i]]++;
        for (int vecino: adj[inf[i]]){
            cubeta[vecino]++;
        }
    }
    int res=0;
    for (int i=1; i<=n; i++){
        if (cubeta[i]!=0){
            res++;
        }
    }
    cout << res;
    return 0;
}
