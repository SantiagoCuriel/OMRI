#include <iostream>

using namespace std;

int n,m,a[2510][2510],f=1,c=1,itf=1,espacio,xs,ys,res;
int main()
{
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        if (i>((itf*(itf+1))/2)+espacio){
            i++;
            espacio++;
            itf++;
            f++;
        }
        for (int j=1; j<=m; j++){
            for (int k=j; k<=j+c-1 && k<=m; k++){
                a[k][i]++;
            }
            j+=c;
            c++;
        }
        res=c-1;
        c=1;
    }
    res*=f;
    cout << res << '\n';
    for (int i=1; i<=m; i++){
        for (int j=n; j>=1; j--){
            if (a[i][j] && a[i-1][j]==0 && a[i][j+1]==0){
                for (int k=i; k<=m && a[k+1][j]==1; k++){
                    xs=k+1;
                }
                if (xs==0){
                    xs=i;
                }
                for (int k=j; k>=1 && a[xs][k-1]==1; k--){
                    ys=k-1;
                }
                if (ys==0){
                    ys=j;
                }
                cout << j << " " << i << " " << ys << " " << xs << '\n';
                xs=0;
                ys=0;
            }
        }
        //cout << '\n';
    }
    return 0;
}
