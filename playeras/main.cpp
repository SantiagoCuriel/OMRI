#include <iostream>

using namespace std;
typedef long long int lli;
lli n,h,x,k,t,a[1000010],res;
int main()
{
    cin >> n >> h >> t;
    while (t--){
        cin >> x >> k;
        lli p=x-k,l=x+k;
        if (p<=0){
            p=1;
        }
        if (l>n){
            l=n;
        }
        a[p]++;
        a[l+1]--;
    }
    for (int i=1; i<=n; i++){
        a[i]=a[i]+a[i-1];
    }
    for (int i=1; i<=n;){
        if (!a[i]){
            lli p=i+h+h;
            if (p>n){
                p=n;
            }
            res++;
            i=p+1;
        }else{
            i++;
        }
    }
    cout << res;

    return 0;
}
