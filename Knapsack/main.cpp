#include <bits/stdc++.h>

using namespace std;
int val[1002];
int peso[1002];
int n,m;
int mat[1002][1002];
int dp(int gem,int weight){
    if(weight>m){
        return INT_MIN;
    }
    if(gem>n){
        return 0;
    }

    int tomar = dp(gem+1,weight+peso[gem]) + val[gem];
    int noTomar = dp(gem+1,weight);
    return max(tomar,noTomar);

}
int main()
{
    memset(mat,-1,sizeof mat);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>val[i]>>peso[i];
    }
    cout<<dp(1,0);
    return 0;
}
/*

5 10
1 3
2 6
5 5
10 100
3 4




*/
