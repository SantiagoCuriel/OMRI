#include <bits/stdc++.h>

using namespace std;

unsigned long long int t,l=1,r;
string s;

void solucion0(unsigned long long int n){
    l=n;
    while (l){
        if (l==n){
            l--;
            s+=('A'+(l%26));
            l/=26;
        }else{
            if (l%26==0){
                s+='Z';
                l/=26;
                l--;
            }else{
                s+=('A'+(l%26)-1);
                l/=26;
            }

        }
    }
    cout<<n<<" ";
    for (int i=s.size()-1; i>=0; i--){
        cout << s[i];
    }
}
int main()
{
    cin >> t;
    if (t){
        unsigned long long int n;
        cin >> s;
        for (int i=0; i<s.size()-1; i++){
            l*=26;
        }
        for (int i=0; i<s.size(); i++){
            n+=(s[i]-'A'+1)*l;
            l/=26;
        }
        cout << n;
    }else{
        unsigned long long int n;
        cin >> n;
        solucion0(n);
        /*for(unsigned long long int i = 1;i<=1000;i++){
            s = "";
            solucion0(i);
            cout<<"\n";
        }*/
    }
    return 0;
}
