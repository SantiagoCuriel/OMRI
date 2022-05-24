#include <bits/stdc++.h>

using namespace std;

int n,arre[1000010],visit[1000010],val[1000010],res,c,p,ant;
stack<int>pila;
void busqueda(int u){
    pila.push(u);
    while(pila.size()){
        u = pila.top();
        if (val[u]!=-1){
            pila.pop();
            while(pila.size()){
                u = pila.top();
                val[u] = val[ arre[u] ]+1;
                pila.pop();
            }
            return;
        }
        if (visit[u]){
            c=visit[ant]-visit[u]+1;
            while(c--){
                val[pila.top()]=visit[ant]-visit[u]+1;
                pila.top();
            }
            while(pila.size()){
                u = pila.top();
                val[u] = val[ arre[u] ]+1;
                pila.pop();
            }
            return;
        }
        visit[u]=++p;
        ant=u;
        pila.push(arre[u]);
    }

}

int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
    }
    memset(val,-1,sizeof(val));
    for (int i=1; i<=n; i++){
        busqueda(i);
    }
    for (int i=1; i<=n; i++){
        res=max(val[i],res);
    }
    cout << res;
    return 0;
}
