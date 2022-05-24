#include <bits/stdc++.h>

using namespace std;

int n,m,cub[50],w[50],vent[50],in,fin,res=INT_MAX,l;
string a,x;

int compara(){
    for (int i=1; i<=26; i++){
        if (cub[i]>vent[i]){
            return -1;
        }
    }
    return 0;
}
int main()
{
    cin >> a >> x;
    n=a.size();
    m=x.size();
    for (int i=0; i<m; i++){
        int pos=x[i]-'a'+1;
        cub[pos]++;
    }
    for (int i=0; i<n; i++){
        int pos=a[i]-'a'+1;
        w[pos]++;
    }
    for (int i=1; i<=26; i++){
        if (w[i]<cub[i]){
            cout << -1;
            return 0;
        }
    }
    in=-1;
    fin=0;
    while (in<=n){
        l=compara();
        if (l==0){
            res=min(res,(in+1)-(fin+1)+1);
            int pos=a[fin]-'a'+1;
            fin++;
            vent[pos]--;
        }else{
            in++;
            int pos=a[in]-'a'+1;
            vent[pos]++;
        }
    }
    cout << res;
    return 0;
}
