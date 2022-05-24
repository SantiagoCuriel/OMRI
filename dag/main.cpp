#include <bits/stdc++.h>

using namespace std;

int n,m,visit[100010];
vector <int> adj[100010];
stack <int> res;
void busqueda(int x){
    if (visit[x]){
        return;
    }
    visit[x]++;
    for (int vecino: adj[x]){
        busqueda(vecino);
    }
    res.push(x);
}
int main()
{
    cin >> n >> m;
    for (int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    for (int i=1; i<=n; i++){
        busqueda(i);
    }
    while (res.size()){
        cout << res.top() << " ";
        res.pop();
    }
    return 0;
}
