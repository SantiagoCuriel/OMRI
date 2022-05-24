#include <bits/stdc++.h>

using namespace std;
string s;
char x='a';
int k,res,l,n,act;
int bar(char letra){
    int in=0,fin=0,dif=0;
    act=0;
    while (in<n){
        int p=abs(letra-s[in]);
        if (p<=l){
            l-=p;
            in++;
            act++;
        }else{
            p=abs(letra-s[fin]);
            l+=p;
            fin++;
            res=max(act,res);
            act--;
        }
    }
    res=max(act,res);
}
int main()
{
    cin >> s >> k;
    n=s.size();
    l=k;
    while (x<='z'){
        bar(x);
        x++;
        l=k;
    }
    cout << res << endl;
    return 0;
}
