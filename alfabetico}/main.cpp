#include <bits/stdc++.h>

using namespace std;

int n;
string palabra[100];
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> palabra [i];
    }
    sort(palabra+1,palabra+n+1);

    for(int i=1;i<=n;i++){
        int tam = palabra[i].size();
        sort(palabra[i].begin(),palabra[i].end());
    }
    for (int i=1; i<=n; i++){
        cout << palabra[i] << endl;
    }

    return 0;
}
