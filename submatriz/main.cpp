#include <iostream>

using namespace std;

int a[1010][1010],b[1010][1010],res[1010][1010],fil,col,f,c,l,x;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> fil >> col;
    for (int i=1; i<=fil; i++){
        for (int j=1; j<=col; j++){
            cin >> a[i][j];
        }
    }
    cin >> f >> c;
    for (int i=1; i<=f; i++){
        for (int j=1; j<=c; j++){
            cin >> b[i][j];
        }
    }
    for (int i=1; i<=(fil-f)+1; i++){
        for (int j=1; j<=(col-c)+1; j++){
            if (a[i][j]==b[1][1]){
                for (int u=i; u<=(i+f)-1; u++){
                    for (int v=j; v<=(j+c)-1; v++){
                        if (a[u][v]!=b[(u-i)+1][(v-j)+1]){
                            x++;
                            break;
                        }
                    }
                    if (x){
                        break;
                    }
                }
                if (x==0){
                    for (int u=i; u<=(i+f)-1; u++){
                        for (int v=j; v<=(j+c)-1; v++){
                            res[u][v]=1;
                        }
                    }
                }
                x=0;
            }
        }
    }
    for (int i=1; i<=fil; i++){
        for (int j=1; j<=col; j++){
            cout << res[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
