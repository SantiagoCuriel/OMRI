#include <iostream>
#include <algorithm>


int n,padre[50010],res;
long long int f,c;
struct ura{
    int x,y,x2,y2;
};
struct ure{
    int mn,mx;
};
ura zona[50010];
ure rango[50010];

int parent(int u){
    while (u!=padre[u]){
        padre[u]=padre[padre[u]];
        u=padre[u];
    }
    return u;
}
void unir(int u, int v){
    u=parent(u);
    v=parent(v);
    if (u==v){
        return;
    }
    padre[u]=v;
    rango[v].mn=std::min(rango[v].mn,rango[u].mn);
    rango[v].mx=std::max(rango[v].mx,rango[u].mx);
}
bool intersectan(ura a,ura b){
    if (b.x2+1<a.x || a.x2+1<b.x || b.y+1<a.y2 || a.y2+1<b.y){
        return false;
    }
    return true;
}
int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin >> n >> f >> c;
    for (int i=1; i<=n; i++){
        int a,b,c,d;
        std::cin >> a >> b >> c >> d;
        zona[i].x=b;
        zona[i].y=a;
        zona[i].x2=d;
        zona[i].y2=c;
        padre[i]=i;
        rango[i].mn=b;
        rango[i].mx=d;

    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(intersectan(zona[i],zona[j])){
                unir(i,j);
            }
        }
    }
    for (int i=1; i<=n; i++){
        if (parent(i)==i){
            if (rango[i].mn==1 && rango[i].mx==c){
                res++;
            }
        }
    }
    std::cout << res;
    return 0;
}
