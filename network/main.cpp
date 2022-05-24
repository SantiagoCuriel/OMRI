#include <bits/stdc++.h>

using namespace std;

int padre[100000],tam[100000],t,n,c,ic;
string s;
int parent(int u){
    while (u!=padre[u]){
        padre[u]=padre[padre[u]];
        u=padre[u];
    }
    return u;
}
void unir(int u,int v){
    u=parent(u);
    v=parent(v);
    if (u>v){
        tam[u]+=tam[v];
        padre[v]=u;
    }else{
        tam[v]+=tam[u];
        padre[u]=v;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n; i++){
            tam[i]=1;
            padre[i]=i;
        }
        getline(cin,s);
        getline(cin,s);
        while (s.size()!=0){
            if (s[0]=='c'){
                int i=2,a=0,b=0,x=s.size();
                while (s[i]!=' '){
                    a+=s[i]-'0';
                    a*=10;
                    i++;
                }
                i++;
                a/=10;
                while (i<x){
                    b+=s[i]-'0';
                    b*=10;
                    i++;
                }
                b/=10;
                unir(a,b);
            }else{
                int i=2,a=0,b=0,x=s.size();
                while (s[i]!=' '){
                    a+=s[i]-'0';
                    a*=10;
                    i++;
                }
                i++;
                a/=10;
                while (i<x){
                    b+=s[i]-'0';
                    b*=10;
                    i++;
                }
                b/=10;
                a=parent(a);
                b=parent(b);
                if (a==b){
                    c++;
                }else{
                    ic++;
                }
            }
            getline(cin,s);
        }
        cout << c << "," << ic << '\n';
        c=0;
        ic=0;
        if (t){
            cout << '\n';
        }
    }
    return 0;
}
