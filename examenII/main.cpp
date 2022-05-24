#include <bits/stdc++.h>

using namespace std;

string pasw;
int res,n,vocal,repeticion,numero;
int lc,lg;
int main()
{
    cin >> n >> pasw;
    if (n>=12){
        res++;
    }
    for (int i=0; i<n; i++){
        if (pasw[i]=='a' || pasw[i]=='e' || pasw[i]=='i' || pasw[i]=='o' || pasw[i]=='u' || pasw[i]=='A' || pasw[i]=='E' || pasw[i]=='I' || pasw[i]=='O' || pasw[i]=='U'){
            vocal++;
        }
        if (pasw[i]=='1' || pasw[i]=='2' || pasw[i]=='3' || pasw[i]=='4' || pasw[i]=='5' || pasw[i]=='6' || pasw[i]=='7' || pasw[i]=='8' || pasw[i]=='9'){
            numero++;
        }
    }
    if (vocal>0){
        res++;
    }
    if (numero>0){
        res++;
    }
    for (int i=0; i<n-1; i++){
        if (pasw[i]==pasw[i+1]){
            repeticion++;
        }
    }
    if (repeticion==0){
        res++;
    }
    if (res==4){
        cout << "SEGURO";
    }else{
            cout << "INSEGURO";
    }
    return 0;
}
