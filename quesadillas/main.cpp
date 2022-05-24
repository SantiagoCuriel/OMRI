#include <bits/stdc++.h>

using namespace std;

set <string> a;
set <string> ::iterator it;
int n;
string q;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> q;
        a.insert(q);
    }
    for (int i=1; i<n; i++){
        cin >> q;
        a.erase(q);
    }
    it=a.begin();
    cout << *it;
    return 0;
}
