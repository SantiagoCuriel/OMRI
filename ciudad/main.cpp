#include <iostream>

using namespace std;

int n,m,a[2510][2510],c,f,h=1,res,espacios;
int main()
{
    cin >> n >> m;
    f=1;
    for (int i=1; i<=n; i++){
        c=1;
        if (i>h){
            espacios++;
            f++;
            i++;
            h+=f+1;
        }
        for (int j=1; j<=m; j++){
            for (int k=j; k<j+c && k<=m; k++){
                a[k][i]++;
            }
            j+=c;
            c++;
        }
        res=c-1;
    }
    res*=f;
    cout << res << '\n';
    for (int i=1; i<=m; i++){
        for (int j=n; j>=1; j--){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    for (int i=1; i<=m; i++){
        for (int j=n; j>=1; j--){
            if (a[i][j] && a[i][j+1]==0 && a[i-1][j]==0){
                cout << i << " " << j << " " ;
                int sx=0,sy=0;
                for (int k=i; a[k][j]; k++){
                    sx=k;
                }
                if (sx==0){
                    sx=i;
                }
                for (int k=j; a[i][k]; k--){
                    sy=k;
                }
                if (sy==0){
                    sy=j;
                }
                cout << sx << " " << sy << '\n';
            }

        }
    }
    return 0;
}
