#include <bits/stdc++.h>

using namespace std;

long long int n,m,p,a[1010];
int main()
{
    cin >> m >> n >> p;
    for (int i=1; i<=p; i++){
        cin >> a[i];
        a[i]--;
    }
    for (int i=1; i<=p; i++){
        long long int y=a[i]/m,x=a[i]%m,c=y;
        c=m-1-x;
        x=y;
        y=c;
        c=(y*n)+x;
        cout << c+1 << '\n';
    }

    return 0;
}
