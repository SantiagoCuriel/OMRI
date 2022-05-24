#include <bits/stdc++.h>

using namespace std;

int n,t;
string s;
int main()
{
    /*ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
    cin >> t;
    while (t--){
        cin >> n >> s;
        int ant=0,a=0,d=1000,cuatro=0,siete=0;
        for (int i=0; i<n; i++){
            if (s[i]=='a'){
                a++;

                if (a!=1){
                    d=min(d,i-ant);
                    if (i-ant==3){
                        if (s[ant+1]!=s[ant+2]){
                            cuatro=1;
                        }else{
                            if (i>=6){
                                if ((s[i-1]=='c' && s[i-2]=='c' && s[i-4]=='b' && s[i-5]=='b' && s[i-6]=='a') || (s[i-1]=='b' && s[i-2]=='b' && s[i-4]=='c' && s[i-5]=='c' && s[i-6]=='a')){
                                    siete=1;
                                }
                            }
                        }
                    }
                }
                ant=i;
            }
        }
        if (a<=1 || d>3){
            cout << -1 << '\n';
        }else{
            if (d==3){
                if (!cuatro){
                    if (siete){
                        cout << 7 << '\n';
                    }else{
                        cout << -1 << '\n';
                    }
                }else{
                    cout << d+1 << '\n';
                }
            }else{
                cout << d+1 << '\n';
            }
        }
    }
    return 0;
}
