#include <iostream>

using namespace std;

int n,t,a[110][110],it=1,l;
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        if (n!=2){
            for (int i=1; i<=n; i++){
                if (i%2){
                    for (int j=1; j<=n; j+=2){
                        a[j][i]=it;
                        it++;
                    }
                }else{
                    for (int j=2; j<=n; j+=2){
                        a[j][i]=it;
                        it++;
                    }
                }
            }
            for (int i=1; i<=n; i++){
                if (i%2){
                    for (int j=2; j<=n; j+=2){
                        a[j][i]=it;
                        it++;
                    }
                }else{
                    for (int j=1; j<=n; j+=2){
                        a[j][i]=it;
                        it++;
                    }
                }
            }
        }else{
            cout << -1 << '\n';
            l++;
        }
        if (!l){
            for (int i=1; i<=n; i++){
                for (int j=1; j<=n; j++){
                    cout << a[j][i] << " ";
                }
                cout << '\n';
            }
        }
        l=0;
        it=1;
    }
    return 0;
}
