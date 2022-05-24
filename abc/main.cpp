#include <bits/stdc++.h>

using namespace std;

int t;
string s,x;
int main()
{
    ios_base::sync_with_stdio(0);
    cin .tie(0);
    cin >> t;
    while (t--){
        cin >> s >> x;
        int n=s.size();
        sort(s.begin(),s.end());
        if (x=="abc"){
            int a=0,b=0,c=0;
            for (int i=0; i<n; i++){
                if (s[i]=='a'){
                    a++;
                }
                if (s[i]=='b'){
                    b++;
                }
                if (s[i]=='c'){
                    c++;
                }
            }
            cout << a << " " << b << " " << c << '\n';
            if (a && b && c){
                int j=0,l=0;
                for (int i=0; i<n; i++){
                    if (s[i]>'c'){
                        while (j){
                            cout << 'b';
                            j--;
                        }
                    }
                    if (s[i]=='b'){
                        j++;
                    }else{
                        cout << s[i];
                    }
                }
                while (j){
                    cout << 'b';
                    j--;
                }
            }else{
                cout << s;
            }
        }else{
            cout << s;
        }
        cout << '\n';
    }
    return 0;
}
