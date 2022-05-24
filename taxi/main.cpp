#include <bits/stdc++.h>

using namespace std;

int n,viajes[2][100010],res[100010],taxis,disp;
struct ura{
    int cliente,evento,dia;
};
bool compara(ura u,ura v){
    if (v.dia>u.dia){
        return true;
    }
    if (v.dia==u.dia){
        if (v.evento>u.evento){
            return true;
        }
    }
    return false;
}
ura arre[200010];
queue <int> cola;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> viajes[0][i];
        cin >> viajes[1][i];
    }
    for (int i=1; i<=n; i++){
        arre[i*2-1].dia=viajes[0][i];
        arre[i*2-1].cliente=i;

        arre[i*2].dia=viajes[1][i];
        arre[i*2].evento++;
        arre[i*2].cliente=i;

    }
    sort(arre+1,arre+n+n+1,compara);
    for (int i=1; i<=n*2; i++){
        //cout << arre[i].dia << " " << arre[i].evento << " " << arre[i].cliente << '\n' << taxis << '\n';
        if (arre[i].evento==0){
            if (disp){
                disp--;
                res[arre[i].cliente]=cola.front();
                cola.pop();
            }else{
                taxis++;
                res[arre[i].cliente]=taxis;
            }
        }else{
            disp++;
            cola.push(res[arre[i].cliente]);
        }
    }
    cout << taxis << '\n';
    for (int i=1; i<=n; i++){
        cout << res[i] << " ";
    }
    return 0;
}
