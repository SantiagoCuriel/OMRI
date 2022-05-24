#include <bits/stdc++.h>

using namespace std;

long long int n,k,s,l;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> k;
        s=((k%10)-1)*10;
        while (k){
            k/=10;
            l++;
            s+=l;
        }
        cout << s << '\n';
        l=0;
        s=0;
    }
    return 0;
}
