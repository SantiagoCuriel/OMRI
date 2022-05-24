#include <bits/stdc++.h>

using namespace std;

int n,m,a,r;
void compara(){
    for (int i=1; i<n; i++){
        cin >> m;
        r+=(m<a);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cin >> m;
    a=m;
    compara();
    cout << r;
    return 0;
}
