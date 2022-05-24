#include <bits/stdc++.h>

using namespace std;

int a,b,k,res[1000010],act;
struct ura{
    int v,p;
};
queue <ura> cola;
int main()
{
    memset(res,-1,sizeof(res));
    cin >> a >> b >> k;
    ura x;
    x.p=0;
    x.v=1;
    res[1]=0;
    cola.push(x);
    while (cola.size()){
        ura act=cola.front();
        act.p++;
        act.v*=a;
        if (act.v<=1000000 && res[act.v]==-1){
            cola.push(act);
            res[act.v]=act.p;
        }
        act=cola.front();
        act.p++;
        act.v/=b;
        if (res[act.v]==-1){
            cola.push(act);
            res[act.v]=act.p;
        }
        cola.pop();
    }
    cout << res[k];
    return 0;
}
