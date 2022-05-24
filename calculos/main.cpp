#include <bits/stdc++.h>

using namespace std;

int a,b,n,visit[10010];
struct ura{
    int x,p;
};
queue <ura> cola;
void busqueda(){
    ura inicio,act;
    inicio.x=1;
    inicio.p=0;
    visit[1]=0;
    cola.push(inicio);
    while (cola.size()){
        inicio=cola.front();
        cola.pop();
        //a
        act=inicio;
        act.x*=a;
        act.p++;
        if (act.x<=9999 && visit[act.x]==-1){
            visit[act.x]=act.p;
            cola.push(act);
        }
        //b
        act=inicio;
        act.x/=b;
        act.p++;
        if (visit[act.x]==-1 && act.x<=9999){
            visit[act.x]=act.p;
            cola.push(act);
        }
    }
}
int main()
{
    memset(visit,-1,sizeof(visit));
    cin >> a >> b >> n;
    busqueda();
    cout << visit[n];
    return 0;
}
