#include <bits/stdc++.h>

using namespace std;

int n,mem[1010];
long long int fib(int x){
    if (x==1 || x==2){
        return 1;
    }
    if (mem[x]!=-1){
        return mem[x];
    }
    return mem[x]=fib(x-1)+fib(x-2);
}
int main()
{
    memset(mem,-1,sizeof(mem));
    cin >> n;
    cout << fib(n);
    return 0;
}
