#include <bits/stdc++.h>

using namespace std;

vector <int> ad[100];
string s="a";
int t,visit[100],l;

void dfs(int nodo,int color){
    visit[nodo]=color;
    for(int vecino:ad[nodo]){
        if(!visit[vecino]){
            l++;
            dfs(vecino,color);
        }
    }
}
void unir(int u, int v){
    ad[u].push_back(v);
    ad[v].push_back(u);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        while (s.size()>0&&s[0]!='*'){
            cin >> s;
            if (s[0]!='*'){
                unir(s[1]-'A'+1,s[3]-'A'+1);
            }
        }
        int it=1;
        for (int i=1; i<=26; i++){
            dfs(i,it);
            if (l){
                l=0;
                it++;
            }
        }
        cin >> s;
        int res=0;
        for (int i=0; i<s.size(); i+=2){
            if (ad[s[i]-'A'+1].size()==0){
                res++;
            }
        }
        cout << "There are " << it-1 << " tree(s) and " << res << " acorn(s)." << '\n';
        for(int i=0;i<30;i++){
            ad[i].clear();
            visit[i]=0;
        }
    }
    return 0;
}
