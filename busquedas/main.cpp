#include <bits/stdc++.h>

using namespace std;

int n,visit[10010],r,l;
vector <int> adj[10010];
void pre(int x){
    if (!visit[x]){
        cout << x << " ";
        visit[x]++;
    }else{
        return;
    }
    for (int vecino: adj[x]){
        pre(vecino);
    }
}
void in(int x){
    if (visit[x]==1){
        cout << x << " ";
        visit[x]++;
        return;
    }
    if (visit[x]){
        return;
    }
    visit[x]++;
    if (adj[x].size()==1){
        cout << x << " ";
    }
    for (int vecino: adj[x]){
        in(vecino);
    }
}
void post(int x){
    if (visit[x]){
        return;
    }
    visit[x]++;
    for (int vecino: adj[x]){
        post(vecino);
    }
    cout << x << " ";
}
void lit(int x, int ant){
    if (!visit[x]){
        cout << x << " ";
        visit[x]++;
    }else{
        return;
    }
    for (int vecino: adj[x]){
        if (vecino!=ant){
            lit(vecino,x);
            cout << x << " ";
        }
    }
}
int main()
{
    cin >> n >> r;
    for (int i=1; i<n; i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    //pre
    cout << "Preorder: ";
    pre(r);
    cout << '\n';
    //in
    cout << "Inorder; ";
    int cero=0,dos=0;
    for (int i=1; i<=n; i++){
        if (adj[i].size()==3){
            dos++;
        }else{
            if (adj[i].size()==1){
                cero++;
            }else{
                if (i!=r && adj[i].size()!=2){
                    l++;
                    break;
                }
            }
        }
    }
    if (l){
        cout << -1;
    }else{
        memset(visit,0,sizeof(visit));
        in(r);
    }
    cout << '\n';
    //post
    cout << "Postorder: ";
    memset(visit,0,sizeof(visit));
    post(r);
    cout << '\n';
    //lit
    memset(visit,0,sizeof(visit));
    cout << "Literal: ";
    lit(r,0);
    return 0;
}
/*
12
1
1 6
1 3
8 6
6 2
6 11
2 7
11 4
11 9
11 10
3 12
3 5
*/
