#include <bits/stdc++.h>

using namespace std;

int n,ab[4010];
long long int dp(int x){
    if (x==1 || x==0){
        return 1;
    }
    if (ab[x]!=-1){
        return ab[x];
    }
    long long int nodo=0;
    for (int i=0; i<x; i++){
        nodo+=dp(i)*dp(x-i-1);
    }
    return ab[x]=nodo;
}
int main()
{
    memset(ab,-1,sizeof(ab));
    cin >> n;
    cout << dp(n);
    return 0;
}
