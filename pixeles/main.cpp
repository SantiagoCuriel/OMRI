#include <iostream>

using namespace std;

int n,f,c,ini,fin;
char mat[110][110],o,x;
struct ura{
    int f,c;
};
ura cola[10010];
void busqueda(){
    while (ini!=fin){
        ura act=cola[ini];
        mat[act.c][act.f]=x;

        if (mat[act.c+1][act.f]==o){
            act.c++;
            cola[fin]=act;
            fin++;
        }
        act=cola[ini];
        if (mat[act.c-1][act.f]==o){
            act.c--;
            cola[fin]=act;
            fin++;
        }
        act=cola[ini];
        if (mat[act.c][act.f+1]==o){
            act.f++;
            cola[fin]=act;
            fin++;
        }
        act=cola[ini];
        if (mat[act.c][act.f-1]==o){
            act.f--;
            cola[fin]=act;
            fin++;
        }
        ini++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> f >> c >> x;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> mat[j][i];
        }
    }
    ini=1;
    fin=2;
    o=mat[c][f];
    ura in;
    in.c=c;
    in.f=f;
    cola[ini]=in;
    busqueda();
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout << mat[j][i];
        }
        cout << '\n';
    }
    return 0;
}
