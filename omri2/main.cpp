#include <bits/stdc++.h>

using namespace std;
 typedef long long int lli;
 long long int n,m,res,maxi=INT_MAX;
 lli cambio(lli num){
    lli au=0;
    for (lli i=1; i; i++){
        if (num%10==0){
            num/=10;
        }else{
            au+=num%10;
            au*=10;
            num-=num%10;
        }
        if (num==0){
            au/=10;
            return au;
        }
    }
 }
int main()
{
    cin >> n;
    m=cambio(n);
    if (m==n){
        cout << n << " " << 0;
    }else{

        for (lli i=1; i<=1000; i++){
            if (i%2==1){
                n+=m;
                res++;
                m=cambio(n);
                if (n==m){
                    cout << n << " " << res;
                    return 0;
                }
            }
            if (i%2==0){
                m+=n;
                res++;
                n=cambio(m);
                if (n==m){
                    cout << n << " " << res;
                    return 0;
                }
            }
            if (n>=4294967295 || i==1000){
                cout << -1;
            }
        }
    }
    return 0;
}
