#include <iostream>

using namespace std;

long long int n,t,s,l,res,f;
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        l=n;
        while (l){
            s++;
            if (l<10){
                f=l;
            }
            l/=10;
        }
        res+=(s-1)*9;
        for (int i=1; i<=s; i++){
            l+=f;
            l*=10;
        }
        l/=10;
        res+=f;
        if (n<l){
            res--;
        }
        cout << res << '\n';
        res=0;
        f=0;
        l=0;
        s=0;
    }
    return 0;
}
