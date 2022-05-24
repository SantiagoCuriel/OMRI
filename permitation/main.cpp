#include <bits/stdc++.h>

using namespace std;

int t,n,arre[110];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--){
        int a,b;
        cin >> n >> a >> b;
        if (a<=n/2 && b>n/2){
            int it=n/2-1;
            cout << a << " ";
            for (int i=n; i>b; i--){
                cout << i << " ";
                it--;
            }
            for (int i=a+1; it; i++){
                cout << i << " ";
                it--;
            }
            it=n/2-1;
            cout << b << " ";
            for (int i=1; i<a; i++){
                cout << i << " ";
                it--;
            }
            for (int i=b-1; it; i--){
                cout << i << " ";
                it--;
            }
        }else{
            if (a>n/2 && b<=n/2 && a==n/2+1 && b==n/2){
                for (int i=a; i<=n; i++){
                    cout << i << " " ;
                }
                for (int i=1; i<=n/2; i++){
                    cout << i << " ";
                }
            }else{
                cout << -1;
            }
        }
        cout << '\n';
    }
    return 0;
}
