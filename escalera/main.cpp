#include <bits/stdc++.h>

using namespace std;

int n,k;
long long int mem[10010];
long long int dp(int x){
    if (x>n){
        return 0;
    }
    if (x==n){
        return 1;
    }
    if (mem[x]!=-1){
        return mem[x];
    }
    long long int suma=0;
    for (int i=1; i<=k; i++){
        suma+=dp(x+i);
    }
    return mem[x]=suma;
}
int main()
{
    memset(mem,-1,sizeof(mem));
    cin >> n >> k;

    cout << dp(0);
    return 0;
}
