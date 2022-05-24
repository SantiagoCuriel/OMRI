#include <bits/stdc++.h>

using namespace std;

long long int n,a[110],l,res,p;
int main()
{
    while (1){
        cin >> n;
        for (int i=1; i<=n; i++){
            cin >> a[i];
            if (a[i]==1){
                p++;
            }
        }
        while (p!=n){
        int aux=a[1];
            for (int i=1; i<n; i++){
                a[i]=__gcd(a[i],a[i+1]);
                if (a[i]==1){
                    l++;
                }
            }
            a[n]=__gcd(a[n],aux);
            if (a[n]==1){
                l++;
            }
            res++;
            p+=abs(p-l);
            l=0;
        }
        if (res){
        cout << res;
        }else{
            return 0;
        }
        res=0;
        l=0;
        p=0;
    }
    return 0;
}
