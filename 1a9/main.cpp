#include <bits/stdc++.h>

using namespace std;

int n,num[10],res=INT_MAX,act;
string arre;
int main()
{
    cin >> arre;
    n=arre.size();
    int izq=0,der=-1;
    while (der<=n){
        if (act<9){
            der++;
            num[arre[der]]++;
            if (num[arre[der]]==1){
                act++;
            }
        }else{
            res=min(res,der-izq+1);
            num[arre[izq]]--;
            if (!num[arre[izq]]){
                act--;
            }
            izq++;
        }
    }
    cout << res;
    return 0;
}
