#include <bits/stdc++.h>

using namespace std;

int t,mat[110][110][110];
string arre;
int dp(int a, int b, int c){
    if(a==-1||b==-1||c==-1){
        return 1000;
    }
    if (a==0 && b==0){
        return c;
    }
    if (a==0 && c==0){
        return b;
    }
    if (c==0 && b==0){
        return a;
    }
    if (mat[a][b][c]!=-1){
        return mat[a][b][c];
    }
    int tomarab=1000,tomarac=1000,tomarbc=1000;

    tomarbc=dp(a+1,b-1,c-1);
    tomarac=dp(a-1,b+1,c-1);
    tomarab=dp(a-1,b-1,c+1);
    return mat[a][b][c]=min(tomarab,min(tomarac,tomarbc));
}
int main()
{
    memset(mat,-1,sizeof(mat));
    cin >> t;
    int a=0,b=0,c=0;
    while (t--){
        cin >> arre;
        for (int i=0; i<arre.size(); i++){
            if (arre[i]=='a'){
                a++;
            }
            if (arre[i]=='b'){
                b++;
            }
            if (arre[i]=='c'){
                c++;
            }
        }
        cout << dp(a,b,c) << '\n';
        a=0,b=0,c=0;
    }
    return 0;
}
