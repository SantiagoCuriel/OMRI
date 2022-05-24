#include <iostream>

using namespace std;
int n,a[1010][1010];
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[j][i];
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=n; j>=1; j--){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
