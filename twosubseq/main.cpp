#include <bits/stdc++.h>

using namespace std;

int t;
string s;
char mn='z';
int main()
{
    cin >> t;
    while (t--){
        cin >> s;
        for (int i=0; i<s.size(); i++){
            mn=min(mn,s[i]);
        }
        cout << mn << " ";
        int l=0;
        for (int i=0; i<s.size(); i++){
            if (s[i]!=mn || l){
                cout << s[i];
            }else{
                l++;
            }
        }
        mn='z';
        cout << '\n';
    }
    return 0;
}
