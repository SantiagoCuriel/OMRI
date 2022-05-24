#include <bits/stdc++.h>

using namespace std;

int n,m,k,s[1010];
struct ura{
    int c,dir;
};
vector <pair<int,int>> adj[1010];

int busqueda(int x,int parent){
    if (s[x]){
        return 0;
    }
    int pri=INT_MAX,seg=INT_MAX;
    for (auto vecino: adj[x]){
        if (parent!=vecino.first){
            int r=busqueda(vecino.first,x)+vecino.second;
            if (r<=pri){
                seg=pri;
                pri=r;
            }else{
                if (r<seg){
                    seg=r;
                }
            }
        }
    }
    return seg;
}
int main()
{
    cin >> n >> m >> k;
    if (n-1!=m){
        cout << 0;
    }
    for (int i=1; i<=m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        pair <int,int> x;
        x.second=c;
        x.first=b;
        adj[a].push_back(x);
        x.first=a;
        adj[b].push_back(x);
    }
    for (int i=1; i<=k; i++){
        int a;
        cin >> a;
        s[a]++;
    }
    cout << busqueda(0,0) << endl;
    return 0;
}
