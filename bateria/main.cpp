#include <bits/stdc++.h>

using namespace std;

int n,k,a,b,l;
int main()
{
    cin >> n >> k >> a >> b;
    int izq=0,der=n+1;
    while (izq+1<der){
        int mid=(izq+der)/2;
        l=a*mid+b*(n-mid);
        if (k-l>0){
            izq=mid;
        }else{
            der=mid;
        }
    }
    if (izq==0){
        cout << -1;
    }else{
        cout << izq;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
