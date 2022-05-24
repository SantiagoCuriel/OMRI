#include <bits/stdc++.h>

using namespace std;

int a,b,c,n;
string s;
int main()
{
    cin >> n;
    while (n--){
        cin >> s;
        for (int i=0; i<s.size(); i++){
            if (s[i]=='A'){
                a++;
            }
            if (s[i]=='B'){
                b++;
            }
            if (s[i]=='C'){
                c++;
            }
        }
        if (a+c==b){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
        a=0;
        b=0;
        c=0;
    }
    return 0;
}
