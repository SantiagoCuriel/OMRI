#include <bits/stdc++.h>

using namespace std;

int t;
string s;
int main()
{
    cin >> t;
    while (t--){
        cin >> s;
        if (s.size()==3){
            if ((s[0]=='o' && s[1]=='n') || (s[0]=='o' && s[2]=='e') || (s[1]=='n' && s[2]=='e')){
                cout << "one" << '\n';
            }else{
                cout << "two" << '\n';
            }
        }else{
            cout << "three" << '\n';
        }
    }
    return 0;
}
