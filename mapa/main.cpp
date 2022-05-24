#include <iostream>

using namespace std;
int n,l,u,v;
char a[510][510],copia[510][510];
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
            cin >> copia[j][i];
        }
    }
    for (int i=1; i<=n; i++){///Funciona
        for (int j=1; j<=n; j++){
            if (a[j][i]==copia[j][i]){
                l++;
            }
        }
    }
    if (l==n*n){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    u=1;
    v=1;
    for (int i=n; i>=1; i--){
        for (int j=1; j<=n; j++){
            if (a[u][v]==copia[i][j]){
                l++;
            }
            u++;
        }
        v++;
        u=1;
    }
    if (l==n*n){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    u=1;
    v=1;
    for (int i=n; i>=1; i--){
        for (int j=n; j>=1; j--){
            if (a[u][v]==copia[j][i]){
                l++;
            }
            u++;
        }
        v++;
        u=1;
    }
    if (l==n*n){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    u=1;
    v=1;
    for (int i=1; i<=n; i++){
        for (int j=n; j>=1; j--){
            if (a[u][v]==copia[i][j]){
                l++;
            }
            u++;
        }
        v++;
        u=1;
    }
    if (l==n*n){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    u=1;
    v=1;
    for (int i=n; i>=1; i--){
        for (int j=1; j<=n; j++){
            if (a[u][v]==copia[j][i]){
                l++;
            }
            u++;
        }
        v++;
        u=1;
    }
    if (l==n*n){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    u=1;
    v=1;
    for (int i=n; i>=1; i--){
        for (int j=n; j>=1; j--){
            if (a[u][v]==copia[i][j]){
                l++;
            }
            u++;
        }
        v++;
        u=1;
    }
    if (l==n*n){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    u=1;
    v=1;
    for (int i=1; i<=n; i++){
        for (int j=n; j>=1; j--){
            if (a[u][v]==copia[j][i]){
                l++;
            }
            u++;
        }
        v++;
        u=1;
    }
    if (l==n*n){
        cout << "IGUALES";
        return 0;
    }
    l=0;
    u=1;
    v=1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (a[u][v]==copia[i][j]){
                l++;
            }
            u++;
        }
        v++;
        u=1;
    }
    if (l==n*n){
        cout << "IGUALES";
        return 0;
    }
    cout << "DIFERENTES";
    return 0;
}
