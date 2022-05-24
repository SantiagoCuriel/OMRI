#include <bits/stdc++.h>

using namespace std;

int n,q,visit[2000];
queue <int> cola;
int main()
{
    cola.push(0);
    while (cola.size()){
        int act=cola.front();
        //11
        if (act<=1099 && !visit[act+11]){
            cola.push(act+11);
            visit[act+11]++;
        }
        //111
        if (act<=1099 && !visit[act+111]){
            cola.push(act+111);
            visit[act+111]++;
        }
        cola.pop();
    }
    cin >> n;
    while (n--){
        cin >> q;
        if (q>=1100){
            cout << "YES" << '\n';
        }else{
            if (visit[q]){
                cout << "YES" << '\n';
            }else{
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}
