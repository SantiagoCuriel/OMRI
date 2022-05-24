#include <iostream>

using namespace std;

int n,l;
char a[510][510],b[510][510];
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[j][i];
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> b[j][i];
            if (b[j][i]==a[j][i]){
                l++;
            }
        }
    }
    if (l==n*n){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    int x=1,y=1;
    for (int i=1; i<=n; i++){
        for (int j=n; j>=1; j--){
            if (a[x][y]!=b[i][j]){
                l++;
                break;
            }
            x++;
        }
        if (l){
            break;
        }
        y++;
        x=1;
    }
    if (!l){
        cout << "IGUALES";
        return 0;
    }l=0;
    x=1,y=1;
    for (int i=1; i<=n; i++){
        for (int j=n; j>=1; j--){
            if (a[x][y]!=b[i][j]){
                l++;
                break;
            }
            x++;
        }
        if (l){
            break;
        }
        y++;
        x=1;
    }
    if (!l){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    x=1,y=1;
    for (int i=n; i>=1; i--){
        for (int j=n; j>=1; j--){
            if (a[x][y]!=b[i][j]){
                l++;
                break;
            }
            x++;
        }
        if (l){
            break;
        }
        y++;
        x=1;
    }
    if (!l){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    x=1,y=1;
    for (int i=n; i>=1; i--){
        for (int j=1; j<=n; j++){
            if (a[x][y]!=b[i][j]){
                l++;
                break;
            }
            x++;
        }
        if (l){
            break;
        }
        y++;
        x=1;
    }
    if (!l){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    x=1,y=1;
    for (int i=1; i<=n; i++){
        for (int j=n; j>=1; j--){
            if (a[x][y]!=b[j][i]){
                l++;
                break;
            }
            x++;
        }
        if (l){
            break;
        }
        y++;
        x=1;
    }
    if (!l){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    x=1,y=1;
    for (int i=n; i>=1; i--){
        for (int j=n; j>=1; j--){
            if (a[x][y]!=b[j][i]){
                l++;
                break;
            }
            x++;
        }
        if (l){
            break;
        }
        y++;
        x=1;
    }
    if (!l){
        cout << "IGUALES";
        return 0;
    }
    l=0;
     x=1,y=1;
    for (int i=n; i>=1; i--){
        for (int j=1; j<=n; j++){
            if (a[x][y]!=b[j][i]){
                l++;
                break;
            }
            x++;
        }
        if (l){
            break;
        }
        y++;
        x=1;
    }
    if (!l){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    x=1,y=1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (a[x][y]!=b[i][j]){
                l++;
                break;
            }
            x++;
        }
        if (l){
            break;
        }
        y++;
        x=1;
    }
    if (!l){
        cout << "IGUALES";
        return 0;
    }
    cout << "DIFERENTES";
    return 0;
}
/*
3
O O X
X X O
X O X

O X X
O X O
X O X
*/
