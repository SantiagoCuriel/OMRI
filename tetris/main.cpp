#include <iostream>

using namespace std;

int n,m,l,f1,f2,f3,f4,f5;
char a[20][20];
int fig1(int u, int v, int p){
    if (a[v+1][u]==p && a[v+1][u+1]==p && a[v][u+1]==p){
        a[v][u]='.';
        a[v+1][u+1]='.';
        a[v+1][u]='.';
        a[v][u+1]='.';
        return 1;
    }
    return 0;
}
int fig2(int u, int v, int p){
    if (a[v+1][u]==p && a[v+2][u]==p && a[v+3][u]==p){
        a[v][u]='.';
        a[v+1][u]='.';
        a[v+2][u]='.';
        a[v+3][u]='.';
        return 1;
    }
    if (a[v][u+1]==p && a[v][u+2]==p && a[v][u+3]==p){
        a[v][u]='.';
        a[v][u+1]='.';
        a[v][u+2]='.';
        a[v][u+3]='.';
        return 1;
    }
    return 0;
}
int fig3(int u, int v, int p){
    if (a[v][u+1]==p && a[v+1][u]==p && a[v-1][u+1]==p){
        a[v][u]='.';
        a[v][u+1]='.';
        a[v-1][u+1]='.';
        a[v+1][u]='.';
        return 1;
    }
    if (a[v][u+1]==p && a[v+1][u+1]==p && a[v+1][u+2]==p){
        a[v][u]='.';
        a[v][u+1]='.';
        a[v+1][u+2]='.';
        a[v+1][u+1]='.';
        return 1;
    }
    return 0;
}
int fig4(int u, int v, int p){
    if (a[v+1][u]==p && a[v+1][u+1]==p && a[v+2][u+1]==p){
        a[v][u]='.';
        a[v+1][u]='.';
        a[v+1][u+1]='.';
        a[v+2][u+1]='.';
        return 1;
    }
    if (a[v][u+1]==p && a[v-1][u+1]==p && a[v-1][u+2]==p){
        a[v][u]='.';
        a[v][u+1]='.';
        a[v-1][u+2]='.';
        a[v-1][u+1]='.';
        return 1;
    }
    return 0;
}
int fig5(int u, int v, int p){
    if (a[v][u+1]==p && a[v][u+2]==p && a[v-1][u+1]==p){
        a[v][u]='.';
        a[v][u+1]='.';
        a[v][u+2]='.';
        a[v-1][u+1]='.';
        return 1;
    }
    if (a[v][u+1]==p && a[v+1][u+1]==p && a[v-1][u+1]==p){
        a[v][u]='.';
        a[v][u+1]='.';
        a[v+1][u+1]='.';
        a[v-1][u+1]='.';
        return 1;
    }
    if (a[v][u+1]==p && a[v][u+2]==p && a[v+1][u+1]==p){
        a[v][u]='.';
        a[v][u+1]='.';
        a[v][u+2]='.';
        a[v+1][u+1]='.';
        return 1;
    }
    if (a[v+1][u]==p && a[v+2][u]==p && a[v+1][u+1]==p){
        a[v][u]='.';
        a[v+1][u]='.';
        a[v+2][u]='.';
        a[v+1][u+1]='.';
        return 1;
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin >> a[j][i];
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (a[j][i]!='.'){
                char aux=a[j][i];
                f1+=fig1(i,j,aux);
                f2+=fig2(i,j,aux);
                f3+=fig3(i,j,aux);
                f4+=fig4(i,j,aux);
                f5+=fig5(i,j,aux);
            }
        }
    }
    cout << f1 << '\n' << f2 << '\n' << f3 << '\n' << f4 << '\n' << f5;
    return 0;
}
