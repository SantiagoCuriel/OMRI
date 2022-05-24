#include <bits/stdc++.h>

using namespace std;

int t[260],visit[260],res=INT_MAX,cuenta,n;
string s,target;
int main()
{
    cin >> s >> target;
    for (int i=0; i<target.size(); i++){
        t[target[i]]++;
    }
    int izq=0,der=-1;
    n=s.size();
    while (der<n){
        if (t[s[izq]]==0 || (visit[s[der]]==2 && t[s[der]])){
            while (t[s[izq]]==0 || visit[s[der]]==2){
                if (visit[s[izq]]){
                    visit[s[izq]]--;
                }
                if (t[s[izq]]){
                    cuenta--;
                }
                if (visit[s[izq]]){
                    cuenta++;
                }
                izq++;
            }
            der=izq-1;
        }
        der++;
        visit[s[der]]++;
        if (t[s[der]] && visit[s[der]]){
            cuenta++;
        }
        if (cuenta==target.size()){
            res=min(res,der-izq+1);
        }
    }
    cout << res;
    return 0;
}
