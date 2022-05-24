#include <bits/stdc++.h>

using namespace std;

int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        long long int k,x;
        cin >> k >> x;
        if (k*(k+1)/2>=x){
            long long int izq=1,der=k+1;
            while (izq+1<der){
                long long int mid=(izq+der)/2;
                if (mid*(mid+1)/2<x){
                    izq=mid;
                }else{
                    der=mid;
                }
            }
            if (izq*(izq+1)/2!=x){
                cout << der << '\n';
            }else{
                cout << izq << '\n';
            }
        }else{
            if (k*k<=x){
                cout << k+k-1 << '\n';
            }else{
                long long int izq=1,der=k;
                while (izq+1<der){
                    long long int mid=(izq+der)/2;
                    if ((k*(k+1)/2)+((k*(k-1)/2)-(mid*(mid+1)/2))>=x){
                        izq=mid;
                    }else{
                        der=mid;
                    }
                }
                if ((k*(k+1)/2)+((k*(k-1)/2)-(izq*(izq+1)/2))!=x){
                    cout << k+(k-der) << '\n';
                }else{
                    cout << k+(k-izq)-1 << '\n';
                }
            }
        }
    }
    return 0;
}
