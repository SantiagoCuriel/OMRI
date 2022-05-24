#include <iostream>

using namespace std;

long long int n,a[775156],l;
int main()
{
    cin >> n;
    for (long long int i=2; i<=775146; i++){
        if (a[i]==0){
            for (long long int j=i*i; j<=775146; j+=i){
                a[j]++;
            }
        }
    }
    for (long long int i=775146; i>=1; i--){
        l=n/i;
        if (a[i]==0 && l*i==n){
            cout << l << " " << i << " " << l*i;
            break;
        }
    }
    return 0;
}
