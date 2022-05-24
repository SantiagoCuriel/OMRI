#include <bits/stdc++.h>

using namespace std;

int t;
string s;
int main()
{
    cin >> t;
    while (t--){
        cin >> s;
        int res=0,n=s.size();
        if (n==1){
            cout << "Bob " << s[0]-'a'+1 << '\n';
        }else{
            if (n%2){
                for (int i=0; i<n; i++){
                    res+=s[i]-'a'+1;
                }
                res-=(min(s[0]-'a'+1,s[n-1]-'a'+1)*2);
                cout  << "Alice " << res << '\n';
            }else{
                for (int i=0; i<n; i++){
                    res+=s[i]-'a'+1;
                }
                cout  << "Alice " << res << '\n';
            }
        }
    }
    return 0;
}
