#include <bits/stdc++.h>

using namespace std;

int n,it=1,rec[2010],prof[2010],visit[1010],mat[2010][11],res[2010][11],q;
vector <int> adj[1010];
struct ura{
    int l,r;
};
ura arre[2010];
int test(int l, int r){
    int d=r-l+1,t=log(d)/log(2),x=1<<t;
    if (mat[l][t]<mat[r-x+1][t]){
        return res[l][t];
    }else{
        return res[r-x+1][t];
    }
}
void busqueda(int x, int ant, int p){
    if (!visit[x]){
        arre[x].l=it;
        arre[x].r=it;
        prof[it]=p;
        rec[it]=x;
        mat[it][0]=p;
        res[it][0]=x;
        it++;
        visit[x]++;
    }else{
        return;
    }
    for (int vecino: adj[x]){
        if (vecino!=ant){
            busqueda(vecino,x,p+1);
            rec[it]=x;
            prof[it]=p;
            arre[x].r=it;
            mat[it][0]=p;
            res[it][0]=x;
            it++;
        }
    }
}
int main()
{
    cin >> n;
    for (int i=1; i<n; i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    busqueda(1,0,0);
    int t=log(n*2)/log(2),x=1;
    for (int i=1; i<=t; i++){
        for (int j=0; j+x-1<=(n-1)*2; j++){
            if (mat[j][i-1]<mat[j+x][i-1]){
                mat[j][i]=mat[j][i-1];
                res[j][i]=res[j][i-1];
            }else{
                mat[j][i]=mat[j+x][i-1];
                res[j][i]=res[j+x][i-1];
            }
        }
        x*=2;
    }
    cin >> q;
    while (q--){
        int a,b,c
        cin >> a >> b >> c;
        cout << test(min(arre[a].l,arre[b].l),max(arre[a].r,arre[b].r)) << '\n';
    }
    return 0;
}
