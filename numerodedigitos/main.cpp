#include <bits/stdc++.h>

using namespace std;

long long int n,res,nueve=9,nueve2=9;
int main()
{
    cin >> n;
    for (int i=1; i; i++){
        if (n>nueve2){
            res+=nueve2*i;
            n-=nueve2;
        }else{
            res+=n*i;
            cout << res;
            break;
        }
        nueve*=10;
        nueve+=9;
        nueve2*=10;
    }
    return 0;
}
