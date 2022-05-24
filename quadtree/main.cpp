#include <bits/stdc++.h>

using namespace std;

int t,res,visit[5][1034];
string s;
int busqueda(int i,int p,int padre){
    int fin=4,avance=0,it=0;
    for (int j=1; j<=fin; j++){
        if (s[i+j-1]=='f'){
            visit[p][(padre*p)+it]++;
        }
        if (s[i+j-1]=='p'){
            avance=busqueda(i+j,p+1);
            fin+=avance;
            j+=avance;
        }
        if (j==fin){
            return fin;
        }
        it++;
    }
}
int main()
{
    cin >> t;
    getline(cin,s);
    while (t--){
        getline(cin,s);
        if (s[0]=='p'){
            busqueda(1,1);
        }
        if (s[0]=='f'){
            res+=1024;
        }
        getline(cin,s);
        if (s[0]=='p'){
            busqueda(1,1,1);
        }
        if (s[0]=='f'){
            res+=1024;
        }
        cout << "There are " << res << " black pixels." << '\n';
        res=0;
    }
    return 0;
}
