#include <bits/stdc++.h>

using namespace std;

string s;
int act,res;
int main()
{
    cin >> s;
    for (int i=0; i<s.size(); i++){
        if (s[i]=='('){
            act++;
        }else{
            act--;
        }
        if (act<0){
            res++;
            act++;
        }
    }
    cout << res+act;
    return 0;
}
