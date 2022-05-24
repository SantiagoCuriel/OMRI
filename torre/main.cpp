#include <bits/stdc++.h>

using namespace std;

int n,h,res=INT_MAX;
struct ura{
    int peso,altura;
    bool operator<(ura x)const{
        return peso<x.peso;
    }
};
ura arre[100010];
multiset <int> mx;
multiset <int> ::iterator it;
int main()
{
    cin >> n >> h;
    for (int i=1; i<=n; i++){
        cin >> arre[i].altura >> arre[i].peso;
    }
    int izq=1,der=0,acth=0,actp=0;
    while (der<=n){
        if (acth<h){
            der++;
            acth+=arre[der].altura;
            actp+=arre[der].peso;
            mx.insert(arre[der].peso);
            cout <<"insert: "<< arre[der].peso << "\n";
        }else{
            it=mx.end();
            it--;
            res=min(res,*it);
            cout << *it << '\n';
            it=mx.find(arre[izq].peso);
            mx.erase(it);
            acth-=arre[izq].altura;
            actp-=arre[izq].peso;
            izq++;
        }
    }
    cout << res;
    return 0;
}
