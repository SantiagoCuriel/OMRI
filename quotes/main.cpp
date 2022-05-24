#include <bits/stdc++.h>

using namespace std;

string s;
int l;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(getline(cin, s)){
        if(s.size()==0){
            return 0;
        }
        for (int i=0; i<s.size(); i++){
            if (s[i]=='"'){
                if (!l){
                    cout << "``";
                }else{
                    cout << "''";
                }
                l++;
                l%=2;
            }else{
                cout << s[i];
            }
        }
        cout << '\n';
    }
    return 0;
}
