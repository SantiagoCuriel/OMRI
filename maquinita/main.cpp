#include <bits/stdc++.h>

using namespace std;

long long int n,t,m,a[1010],l,it=1;
string q;
void estaciona(int largo){
    int ini,fin;
    for (int i=1; i<=m; i++){
        if (a[i]==0){
            if (a[i-1]!=0){
                ini=i;
                fin=i;
            }else{
                fin++;
            }
            l++;
            if (l==largo){
                for (int j=ini; j<=fin; j++){
                    a[j]=it;
                }
                break;
            }
        }else{
            l=0;
            ini=0;
            fin=0;
        }
    }
    if (l!=largo){
        cout << "NELL" << "\n";
    }else{
        cout << it << '\n';
        it++;
    }
    l=0;
}
void devolver(int ticket){
    for (int i=1; i<=m; i++){
        if (a[i]==ticket){
            l++;
            a[i]=0;
        }
    }
    if (l==0){
        cout << "NOHAY_NOEXISTE\n";
    }
    l=0;
}
void reacomodar(){
    int prim=0;
    for (int i=1; a[i]!=0; i++){
        prim=i;
    }
    prim++;
    for (int i=prim; i<=m; i++){
        for (int j=i+1; a[j]==0; j++){
            if (a[j+1]!=0 && j<m){
                a[i]=a[j+1];
                a[j+1]=0;
                break;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    a[0]=-10;
    cin >> t >> m;
    while (t--){
        cin >> q;
        if (q=="Reacomodar"){
            reacomodar();
        }else{
            cin >> n;
            if (q=="Estacionar"){
                estaciona(n);
            }else{
                devolver(n);
            }
        }
    }
    return 0;
}
//6 10 Estacionar 5 Estacionar 3 Devolver 1 Estacionar 6 Reacomodar Estacionar 6
