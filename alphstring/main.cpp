#include <bits/stdc++.h>

using namespace std;

int t,n,in,l;
char it;
string s;
int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    cin >> t;
    while (t--){
        cin >> s;
        it='b';
        n=s.size();
        for (int i=0; i<n; i++){
            if (s[i]=='a'){
                l++;
                break;
            }
            in++;
        }
        if (l){
            int izq=in-1,der=in+1;
            while (izq>=0 || der<n){
                if (izq>=0 && s[izq]==it){
                    it++;
                    izq--;
                }else{
                    if (der<n && s[der]==it){
                        it++;
                        der++;
                    }else{
                        l=0;
                        break;
                    }
                }
            }
        }
        if (!l){
            cout << "NO";
        }else{
            cout << "YES";
        }
        cout << '\n';
        l=0;
        in=0;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
