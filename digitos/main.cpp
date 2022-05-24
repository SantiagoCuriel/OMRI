#include <bits/stdc++.h>

using namespace std;

int n,a[100010],l;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    for (int i=1; i<=n; i++){
        cout << a[i] << " ";
    }
    cout << '\n' << 0 << " ";
    for (int i=2; i<=n; i++){
        if (a[i]==a[i-1]){
            l++;
        }else{
            l=0;
        }
        cout << i-l-1 << " ";
    }
    return 0;
}
