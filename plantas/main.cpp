#include <bits/stdc++.h>

using namespace std;

int n,m,visit[110][110][30][30],inx,iny,fx,fy,res=INT_MAX;
char mapa[110][110];
struct ura{
    int p,x,y,manoizq,manoder;
};
queue <ura> cola;
void normal(){
    ura act=cola.front();
    //izq
    act.p++;
    act.x--;
    if ((mapa[act.x][act.y]>'z'|| mapa[act.x][act.y]<'a') && mapa[act.x][act.y]!='#' && act.x<=m && act.x>=1 && act.y<=n && act.y>=1){
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
     act=cola.front();
    //der
    act.p++;
    act.x++;
    if ((mapa[act.x][act.y]>'z'|| mapa[act.x][act.y]<'a') && mapa[act.x][act.y]!='#' && act.x<=m && act.x>=1 && act.y<=n && act.y>=1){
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
     act=cola.front();
    //arriba
    act.p++;
    act.y--;
    if ((mapa[act.x][act.y]>'z'|| mapa[act.x][act.y]<'a') && mapa[act.x][act.y]!='#' && act.x<=m && act.x>=1 && act.y<=n && act.y>=1){
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
     act=cola.front();
    //abajo
    act.p++;
    act.y++;
    if ((mapa[act.x][act.y]>'z'|| mapa[act.x][act.y]<'a') && mapa[act.x][act.y]!='#' && act.x<=m && act.x>=1 && act.y<=n && act.y>=1){
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
}
void balla1(){
    ura act=cola.front();
    //izq
    act.p++;
    act.x--;
    if (mapa[act.x][act.y]<='Z' && mapa[act.x][act.y]>='A'){
        if (!act.manoizq){
            act.manoizq=mapa[act.x][act.y]-'A'+1;
        }else{
            if (!act.manoder){
                act.manoder=mapa[act.x][act.y]-'A'+1;
            }
        }
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
    act=cola.front();
    //der
    act.p++;
    act.x++;
    if (mapa[act.x][act.y]<='Z' && mapa[act.x][act.y]>='A'){
        if (!act.manoizq){
            act.manoizq=mapa[act.x][act.y]-'A'+1;
        }else{
            if (!act.manoder){
                act.manoder=mapa[act.x][act.y]-'A'+1;
            }
        }
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
    act=cola.front();
    //arriba
    act.p++;
    act.y--;
    if (mapa[act.x][act.y]<='Z' && mapa[act.x][act.y]>='A'){
        if (!act.manoizq){
            act.manoizq=mapa[act.x][act.y]-'A'+1;
        }else{
            if (!act.manoder){
                act.manoder=mapa[act.x][act.y]-'A'+1;
            }
        }
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
    act=cola.front();
    //abajo
    act.p++;
    act.y++;
    if (mapa[act.x][act.y]<='Z' && mapa[act.x][act.y]>='A'){
        if (!act.manoizq){
            act.manoizq=mapa[act.x][act.y]-'A'+1;
        }else{
            if (!act.manoder){
                act.manoder=mapa[act.x][act.y]-'A'+1;
            }
        }
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
    act=cola.front();
}
void balla2(){
    ura act=cola.front();
    //izq
    act.p++;
    act.x--;
    if (mapa[act.x][act.y]<='Z' && mapa[act.x][act.y]>='A'){
        if (!act.manoizq && !act.manoder){
            act.manoizq=mapa[act.x][act.y]-'A'+1;
            act.manoder=mapa[act.x][act.y]-'A'+1;
        }
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
    act=cola.front();
    //der
    act.p++;
    act.x++;
    if (mapa[act.x][act.y]<='Z' && mapa[act.x][act.y]>='A'){
        if (!act.manoizq && !act.manoder){
            act.manoizq=mapa[act.x][act.y]-'A'+1;
            act.manoder=mapa[act.x][act.y]-'A'+1;
        }
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
    act=cola.front();
    //arriba
    act.p++;
    act.y--;
    if (mapa[act.x][act.y]<='Z' && mapa[act.x][act.y]>='A'){
        if (!act.manoizq && !act.manoder){
            act.manoizq=mapa[act.x][act.y]-'A'+1;
            act.manoder=mapa[act.x][act.y]-'A'+1;
        }
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
    act=cola.front();
    //abajo
    act.p++;
    act.y++;
    if (mapa[act.x][act.y]<='Z' && mapa[act.x][act.y]>='A'){
        if (!act.manoizq && !act.manoder){
            act.manoizq=mapa[act.x][act.y]-'A'+1;
            act.manoder=mapa[act.x][act.y]-'A'+1;
        }
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
    act=cola.front();
}
void planta(){
    ura act=cola.front();
    int bandera=0;
    //izq
    act.p++;
    act.x--;
    if (mapa[act.x][act.y]<='z' && mapa[act.x][act.y]>='a'){
        if (act.manoizq==mapa[act.x][act.y]-'a'+1){
            act.manoizq=0;
            bandera++;
        }else{
            if (act.manoder==mapa[act.x][act.y]-'a'+1){
                act.manoder=0;
                bandera++;
            }
        }
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1 && bandera){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
    bandera=0;
    act=cola.front();
    //der
    act.p++;
    act.x++;
    if (mapa[act.x][act.y]<='z' && mapa[act.x][act.y]>='a'){
        if (act.manoizq==mapa[act.x][act.y]-'a'+1){
            act.manoizq=0;
            bandera++;
        }else{
            if (act.manoder==mapa[act.x][act.y]-'a'+1){
                act.manoder=0;
                bandera++;
            }
        }
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1 && bandera){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
    bandera=0;
    act=cola.front();
    //arriba
    act.p++;
    act.y--;
    if (mapa[act.x][act.y]<='z' && mapa[act.x][act.y]>='a'){
        if (act.manoizq==mapa[act.x][act.y]-'a'+1){
            act.manoizq=0;
            bandera++;
        }else{
            if (act.manoder==mapa[act.x][act.y]-'a'+1){
                act.manoder=0;
                bandera++;
            }
        }
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1 && bandera){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
    bandera=0;
    act=cola.front();
    //abajo
    act.p++;
    act.y++;
    if (mapa[act.x][act.y]<='z' && mapa[act.x][act.y]>='a'){
        if (act.manoizq==mapa[act.x][act.y]-'a'+1){
            act.manoizq=0;
            bandera++;
        }else{
            if (act.manoder==mapa[act.x][act.y]-'a'+1){
                act.manoder=0;
                bandera++;
            }
        }
        if (visit[act.x][act.y][act.manoizq][act.manoder]==-1 && bandera){
            visit[act.x][act.y][act.manoizq][act.manoder]=act.p;
            cola.push(act);
        }
    }
    bandera=0;
    act=cola.front();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(visit,-1,sizeof(visit));
    cin >> n >> m >> iny >> inx;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){

            cin >> mapa[j][i];
            if (mapa[j][i]=='%'){
                fx=j;
                fy=i;
            }
        }
    }
    visit[inx][iny][0][0]=0;
    ura inicio;
    inicio.manoder=0;
    inicio.manoizq=0;
    inicio.p=0;
    inicio.x=inx;
    inicio.y=iny;
    cola.push(inicio);
    if (mapa[inx][iny]>='A' && mapa[inx][iny]<='Z'){
        inicio.manoizq=mapa[inx][iny]-'A'+1;
        cola.push(inicio);
        inicio.manoder=inicio.manoizq;
        cola.push(inicio);
    }
    while (cola.size()){
        ura t=cola.front();
        cout << t.x << " " << t.y << " " << t.p << " "<<t.manoizq << " " << t.manoder << '\n';
        normal();
        balla1();
        balla2();
        planta();
        cola.pop();
    }
    for (int i=0; i<=26; i++){
        for (int j=0; j<=26; j++){
            if (visit[fx][fy][j][i]>-1){
                res=min(res,visit[fx][fy][j][i]);
            }
        }
    }

    if(res<INT_MAX){
        cout<<res;
        return 0;
    }
    cout<<-1;
    return 0;
}
/*
5 5
1 1
_____
_____
_____
_____
____%
*/
