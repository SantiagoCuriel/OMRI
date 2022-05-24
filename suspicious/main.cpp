#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
lli n,t;
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        if (n==1){
            cout << 2 << '\n';
        }else{
            lli izq=0,der=n;
            while (izq+1<der){
                lli mid=(izq+der)/2;
                lli a,b,c;
                a=mid/3;
                if (a*3==mid){
                    b=a;
                    c=a;
                }else{
                    if (a*3+1==mid){
                        b=a;
                        c=a+1;
                    }else{
                        b=a+1;
                        c=a+1;
                    }
                }
                lli c1,c2,c3;
                c1=a*b;
                c2=a*c;
                c3=c*b;
                if ((c1+c2+c3)*2>=n){
                    der=mid;
                }else{
                    izq=mid;
                }
            }
            cout << der << '\n';
        }
    }
    return 0;
}
