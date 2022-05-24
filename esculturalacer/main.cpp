#include <bits/stdc++.h>

using namespace std;

int n,a,c,x[10010],res,laser;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a >> c;
        laser=a;
        for (int j=1; j<=c; j++){
            cin >> x[j%c];
            x[j%c]=abs(x[j%c]-a);
            if (x[j%c]<laser){
                res++;
            }
            if (j%c==c){
                laser--;
            }
        }
        for (int j=1; j<=(c-1)*a; j++){
            x[j%c]=abs(x[j%c]-a);
            if (x[j%c]<laser){
                res++;
            }
            if (j%c==c){
                laser--;
            }
            cout << res;
        }
    }
    return 0;
}
