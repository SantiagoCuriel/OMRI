#include <bits/stdc++.h>

using namespace std;
int mem[1010][1010];
string a,b;
long long int dp(int x, int y,int ac, int bc){
    if (x>=a.size()+ac || y>=b.size()+bc){
        if (a.size()+ac!=b.size()+bc){
            return INT_MAX;
        }
        return 0;
    }
    if (mem[x][y]!=-1){
        return mem[x][y];
    }
    long long int sa=INT_MAX,aa=INT_MAX,qa=INT_MAX,ab=INT_MAX,qb=INT_MAX;
    if (a[x]!=b[y]){
        sa=dp(x+1,y+1,ac,bc)+1;
        aa=dp(x,y+1,ac+1,bc)+1;
        qa=dp(x+1,y,ac-1,bc)+1;
        ab=dp(x+1,y,ac,bc+1)+1;
        qb=dp(x,y+1,ac,bc-1)+1;
    }else{
        return mem[x][y]=dp(x+1,y+1,ac,bc);
    }
    return mem[x][y]=min(min(min(sa,aa),min(qa,ab)),qb);
}
int main()
{
    memset(mem,-1,sizeof(mem));
    cin >> a >> b;
    cout << dp(0,0,0,0);
    return 0;
}
