#include <bits/stdc++.h>

using namespace std;

int t,arre[30];
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> s;
        for (int i=0; i<26; i++){
            arre[s[i]-'a'+1]=i+1;
        }
        cin >> s;
        int res=0;
        for (int i=0; i<s.size()-1; i++){
            res+=abs(arre[(s[i]-'a'+1)]-arre[(s[i+1]-'a'+1)]);
        }
        cout << res << '\n';
    }//a=11 b=24 c=22 d=13
    return 0;
    /*qwertyuiopasdfghjklzxcvbnm
    abacaba*/
}
