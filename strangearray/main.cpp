#include <bits/stdc++.h>

using namespace std;

long long int n,t,arre[100010],mx,res,act,pos,neg,cero;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n; i++){
            cin >> arre[i];
            if (arre[i]>0){
                pos++;
            }
            if (arre[i]<0){
                neg++;
            }
            if (arre[i]==0){
                cero++;
            }
        }
        sort(arre+1,arre+n+1);
        if (cero && neg && pos){
            mx=arre[neg+cero+1];
            act=arre[neg+cero+1];
            res++;
            for (int i=n-1; i>=1; i--){
                if (arre[i]<=act-mx){
                    res++;
                    act=arre[i];
                }
            }
            cout << max(cero+neg,res) << '\n';
        }else{
            if (!neg && cero && pos){
                cout << max(cero,2LL) << '\n';
            }else{
                if (neg && cero && !pos){
                    cout << cero+neg << '\n';
                }else{
                    if (neg && !cero && !pos){
                        cout << neg << '\n';
                    }else{
                        if (!neg && !cero && pos){
                            cout << 1 << '\n';
                        }else{
                            if (neg && !cero && pos){
                                mx=arre[neg+1];
                                act=arre[neg+1];
                                res++;
                                for (int i=n-1; i>=1; i--){
                                    if (arre[i]<=act-mx){
                                        res++;
                                        act=arre[i];
                                    }
                                }
                                cout << max(res,neg) << '\n';
                            }else{
                                cout << cero << '\n';
                            }
                        }
                    }
                }
            }
        }
        res=0;
        neg=0;
        cero=0;
        pos=0;
    }
    return 0;
}
