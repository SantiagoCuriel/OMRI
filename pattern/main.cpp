#include <bits/stdc++.h>

using namespace std;

int n,mat[1010][1010];
string file,pat;
int dp(int x, int y){
    if (x>=file.size() && y>=pat.size()){
        return 0;
    }
    if (x<file.size() && y>=pat.size()){
        return 1;
    }
    if (mat[x][y]!=-1){
        return mat[x][y];
    }
    int ast=1,nsig=1,sig=1,signo=1,letra=1;
    if (pat[y]=='?'){
        sig=dp(x+1,y+1);
    }else{
        if (pat[y]=='*'){
            nsig=dp(x,y+1);
            signo=dp(x+1,y+1);
            if (x+1<file.size()){
                sig=dp(x+1,y);
            }
        }else{
            if (pat[y]==file[x]){
                letra=dp(x+1,y+1);
            }
        }
    }
    if (ast==0 || signo==0 || sig==0 || nsig==0 || letra==0){
        return mat[x][y]=0;
    }else{
        return mat[x][y]=1;
    }
}
int main()
{
    memset(mat,-1,sizeof(mat));
    cin >> file >> pat;
    int l=dp(0,0);
    if (l){
        cout << "NO";
    }else{
        cout << "YES";
    }
    return 0;
}
