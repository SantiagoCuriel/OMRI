#include <bits/stdc++.h>

using namespace std;
string palabra,arbalap;
int n,letra;
int main()
{
    cin>>n;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i=1; i<=n; i++){
        arbalap.clear();
        cin >> palabra;
        letra=palabra.size();
        letra-=1;
        for (int j=letra; j>=0; j--){
            arbalap+=palabra[j];
        }
        if (palabra==arbalap){
            cout<< "si ";
        }else{
            cout << "no ";
        }
    }
    return 0;
}
