#include <bits/stdc++.h>

using namespace std;

long long int t,n,res;
struct ura{
    int v,p;
};
queue <ura> cola;
void busqueda(){
    while (cola.size()){
        ura act=cola.front();
        int x=sqrt(act.v);
        for (int i=x; i>=x/2; i--){
            act.p++;
            act.v-=i*i;
            if (act.v){
                cola.push(act);
            }else{
                cout << act.p << '\n';
                return;
            }
            act=cola.front();
        }
        cola.pop();
    }
}
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        ura in;
        in.p=0;
        in.v=n;
        cola.push(in);
        busqueda();
        while (cola.size()){
            cola.pop();
        }
    }
    return 0;
}
