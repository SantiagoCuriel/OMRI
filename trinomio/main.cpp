#include <bits/stdc++.h>

using namespace std;

int n;
long long int mat[2010][6];
long long int dp(int x,int d){
    if (x>n){
        return 0;
    }
    if (mat[x][d+1]!=-1){
        return mat[x][d+1];
    }
    long long int t1=0,t2=0,t3=0,t4=0,t5=0;
    if (d==0){
        t1=dp(x+2,d-1)%70000027+1;
        t2=dp(x+1,d+1)%70000027+1;
    }
    if (x+2<=n){
        if (d){
            t3=dp(x+3,d)%70000027+1;
        }else{
            t3=dp(x+3,d)%70000027;
        }
    }
    if (d==1){
        t4=dp(x+2,d-1)%70000027;
    }
    if (d==-1){
        t5=dp(x+1,d+1)%70000027;
    }
    mat[x][d+1]=t1%70000027+t2%70000027+t3%70000027+t4%70000027+t5%70000027;
    return mat[x][d+1]%=70000027;
}
int main()
{
    memset(mat,-1,sizeof(mat));
    cin >> n;
    cout << dp(1,0)%70000027+1;
    return 0;
}
