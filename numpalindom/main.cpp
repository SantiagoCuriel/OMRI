#include <bits/stdc++.h>

using namespace std;

int n,res;
int pro(int x,int y){
    int l=x*y,p=l,s=0,k=0,sim=0;
    while (p){
        p/=10;
        s++;
    }
    p=l;
    sim=s/2;
    while (sim--){
        k+=p%10;
        k*=10;
        p/=10;
    }
    k/=10;
    if (s%2){
        p/=10;
    }
    if (p==k){
        return 1;
    }
    return 0;
}
int main()
{
    for (int i=999; i>=100; i--){
        for (int j=999; j>=100; j--){
            n=pro(i,j);
            if (n){
                res=max(res,i*j);
            }
        }
    }
    cout << res;
    return 0;
}
