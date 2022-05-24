#include <bits/stdc++.h>

using namespace std;

int l,r[100010],res=1;
string s;
int main()
{
    cin >> s;
    int izq=0,der=-1;
    while (der<(int)s.size()){
        if (!l){
            der++;
            r[s[der]]++;
            if (r[s[der]]==2){
                l++;
            }
        }else{
            res=max(res,der-izq);
            r[s[izq]]--;
            if (r[s[izq]]==1){
                l--;
            }
            izq++;
        }
    }
    //cout<<s.size()<<"\n";
    cout << res;
    return 0;
}
