#include <bits/stdc++.h>

using namespace std;

int n,t;
string s;
struct ura{
    int e,d,c,b,a;
};
ura arre[100010];
int main()
{
    cin >> t;
    while (t--){
        cin >> n;
        for (int i=1; i<=n; i++){
            cin >> s;
            for (int j=0; j<s.size(); i++){
                if (s[j]=='a'){
                    arre[i].a++;
                }
                if (s[j]=='b'){
                    arre[i].b++;
                }
                if (s[j]=='c'){
                    arre[i].c++;
                }
                if (s[j]=='d'){
                    arre[i].d++;
                }
                if (s[j]=='e'){
                    arre[i].e++;
                }
            }
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
