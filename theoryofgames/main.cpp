#include <bits/stdc++.h>

using namespace std;

int t;
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> s;
        for (int i=0; i<s.size(); i++){
            if (i%2==0){
                if (s[i]=='a'){
                    s[i]='b';
                }else{
                    s[i]='a';
                }
            }else{
                if (s[i]=='z'){
                    s[i]='y';
                }else{
                    s[i]='z';
                }
            }
        }
        cout << s << '\n';
    }
    return 0;
}
