#include <bits/stdc++.h>

using namespace std;

int t,n,m,a[1010],it=1,p;
string s;
void reacomodar(){
    int x=1;;
    for (int i=1; i<=m; i++){
        while (a[x]!=0){
            x++;
        }
        if (a[i]){
            a[x]=a[i];
            a[i]=0;
        }
    }
}
int estacionar(int x){
    int l=0;
    for (int i=1; i<=m; i++){
        while (a[i]!=0){
            i++;
        }
        if (i+x<=m){
            for (int j=i; j<=i+x-1; j++){
                if (a[j]!=0){
                    l++;
                }
            }
            if (l==0){
                for (int j=i; j<=i+x-1; j++){
                    a[j]=it;
                }
                return 1;
            }
        }
    }
    return 0;
}
int devolver(int x){
    int l=0;
    for (int i=1; i<=m; i++){
        if (a[i]==x){
            l++;
            a[i]=0;
        }
    }
    if (l){
        return 1;
    }
    return 0;
}
int main()
{
    cin >> t >> m;
    while (t--){
        cin >> s;
        if (s=="Reacomodar"){
            reacomodar();
        }else{
            cin >> n;
            if (s=="Estacionar"){
                p=estacionar(n);
                if (p){
                    cout << it << '\n';
                    it++;
                }else{
                    cout << "NELL" << '\n';
                }
            }else{
                p=devolver(n);
                if (!p){
                    cout << "NOHAY_NOEXISTE" << '\n';
                }
            }
            p=0;
        }
    }
    return 0;
}
