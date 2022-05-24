#include <iostream>

using namespace std;
long long int n,k[1010][3],r,p,a,b;
long long int sumatoria(long long int x){
    return x*(x+1)/2;
}
long long int caso(int pos){
    if (a<=k[pos][1] && b>=k[pos][2]){
        return sumatoria(k[pos][2]-k[pos][1]+1)%10000;
    }
    if (b<k[pos][1] || a>k[pos][2]){
        return 0;
    }
    if (a<=k[pos][1] && b<k[pos][2]){
        return sumatoria(b-k[pos][1]+1)%10000;
    }
    if (a>k[pos][1] && b>=k[pos][2]){
        return (sumatoria(k[pos][2]-k[pos][1]+1)%10000-sumatoria(a-k[pos][1])%10000+10000)%10000;
    }
    return (sumatoria(b-k[pos][1]+1)%10000-sumatoria(a-k[pos][1])%10000+10000)%10000;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> r >> p;
    for (int i=1; i<=r; i++){
        cin >> k[i][1] >> k[i][2];
    }
    long long int suma=0;
    for (int i=1; i<=p; i++){
        cin >> a >> b;
        for (int j=1; j<=r; j++){
            suma+=caso(j)%10000;
            suma%=10000;
        }
        cout << suma%10000 << '\n';
        suma=0;
    }
    return 0;
}
