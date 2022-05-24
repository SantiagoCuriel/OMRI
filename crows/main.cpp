#include <bits/stdc++.h>

using namespace std;

int t,m,n,it=1,l,a[1010];
string q,r;

int estacionar(){
    int p=0,in=1;
    for (int i=1; i<=m; i++){
        if (!a[i]){
            p++;
        }else{
            p=0;
            in=i+1;
        }
        if (p==n){
            for (int j=in; j<=in+p-1; j++){
                a[j]=it;
            }
            it++;
            return it;
        }
    }
    return 0;
}
int devolver(){
    int p=0;
    for (int i=1; i<=m; i++){
        if (a[i]==n){
            p++;
            a[i]=0;
        }
    }
    if (!p){
        return 0;
    }
    return 1;
}
void reacomodar(){
    int in=1;
    while (a[in]){
            in++;
        }
    for (int i=in+1; i<=m; i++){
        if (a[i] && in<i){
            a[in]=a[i];
            a[i]=0;
            in++;
        }
        while (a[in]){
            in++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    a[0]++;
    cin >> t >> m;
    while (t--){
        cin >> q;
        if (q=="Reacomodar"){
            reacomodar();
        }else{
            cin >> n;
        }
        if (q=="Estacionar"){
            l=estacionar();
            if (l){
                cout << l-1 << '\n';
            }else{
                cout << "NELL" << '\n';
            }
        }
        if (q=="Devolver"){
            l=devolver();
            if (!l){
                cout << "NOHAY_NOEXISTE" << '\n';
            }
        }
    }
    return 0;
}
