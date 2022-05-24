#include <bits/stdc++.h>

using namespace std;

int n,a[10000010],b[1],l,p;
int main()
{
    cin >> n;
    p=sqrt(n);
    for (int i=2; i<=p; i++){
        if (!a[i]){
            for (int j=i*i; j<=n; j+=i){
                a[j]=1;
            }
        }

    }
    for (int j=2; j<=n; j++){
        if (!a[j]){
                l++;
        }
    }
    cout << l << endl;
    return 0;
}
