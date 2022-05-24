#include <iostream>

using namespace std;

int a[18][18],r[38],l,res,pm,sm,x,y;
int mayor(){
    int act,k=0;
    for (int i=1; i<=28; i++){
        k=max(k,r[i]);
        if (k==r[i]){
            act=i;
        }
        y=k;
    }
    if (r[act]==0){
        return 0;
    }
    r[act]=0;
    return act;
}
int main()
{
    for (int i=1; i<=8; i++){
        for (int j=1; j<=8; j++){
            cin >> a[j][i];
            r[a[j][i]]++;
            if (a[j][i]==0){
                l++;
            }
        }
    }
    pm=mayor();
    x=y;
    y=0;
    sm=mayor();
    if (l==64){
        cout << "ISAI GANA POR DEFAULT";
        return 0;
    }
    if (x==y){
        cout << "EMPATE XD ";
        return 0;
    }
    if (pm==1){
        cout << "TODOS PIERDEN";
        return 0;
    }
    cout << pm;
    return 0;
}
/*
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 2 2
0 0 0 0 0 0 1 1
*/
