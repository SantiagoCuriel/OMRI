#include <bits/stdc++.h>

using namespace std;
string s="1",r="1";
int n,sobra;
int main()
{
    cin >> n;
    for (int i=n; i>0; i--){
        r.clear();
        for (int j=s.size()-1; j>=0; j--){
            if (s[j]=='0'){
                r=char('0'+sobra)+r;
                sobra=0;
            }
            if (s[j]=='1'){
                r=char('2'+sobra)+r;
                sobra=0;
            }
            if (s[j]=='2'){
                r=char('4'+sobra)+r;
                sobra=0;
            }
            if (s[j]=='3'){
                r=char('6'+sobra)+r;
                sobra=0;
            }
            if (s[j]=='4'){
                r=char('8'+sobra)+r;
                sobra=0;
            }
            if (s[j]=='5'){
                r=char('0'+sobra)+r;
                sobra=1;
            }
            if (s[j]=='6'){
                r=char('2'+sobra)+r;
                sobra=1;
            }
            if (s[j]=='7'){
                r=char('4'+sobra)+r;
                sobra=1;
            }
            if (s[j]=='8'){
                r=char('6'+sobra)+r;
                sobra=1;
            }
            if (s[j]=='9'){
                r=char('8'+sobra)+r;
                sobra=1;
            }
        }
        if (sobra){
            r=('1')+r;
        }
        sobra=0;
        s=r;
    }
    cout << s << endl;
    return 0;
}
