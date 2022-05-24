#include <bits/stdc++.h>

using namespace std;
int n,lx,ly,mx,my,visit[60][60][60][60],resx,resy;
char a[60][60];
struct ura{
    int xm,ym,xl,yl,p;
};
queue <ura> cola;
void busqueda(){
    while (cola.size()){
        ura act,inicio;
        inicio=cola.front();
        cola.pop();
        //izqm
        act=inicio;
        act.xm--;
        act.ym;
        act.xl;
        act.yl;
        act.p++;
        if (a[act.xm][act.ym]!='#' && a[act.xl][act.yl]!='*' && visit[act.xm][act.ym][act.xl][act.yl]==-1){
            if (a[act.xm][act.ym]=='*'){
                if (a[act.xl][act.yl]=='B'){
                    visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                    cola.push(act);
                }
            }else{
                visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                cola.push(act);
            }
        }
        //derm
        act=inicio;
        act.xm++;
        act.ym;
        act.xl;
        act.yl;
        act.p++;
        if (a[act.xm][act.ym]!='#' && a[act.xl][act.yl]!='*' && visit[act.xm][act.ym][act.xl][act.yl]==-1){
            if (a[act.xm][act.ym]=='*'){
                if (a[act.xl][act.yl]=='B'){
                    visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                    cola.push(act);
                }
            }else{
                visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                cola.push(act);
            }
        }
        //abajom
        act=inicio;
        act.xm;
        act.ym++;
        act.xl;
        act.yl;
        act.p++;
        if (a[act.xm][act.ym]!='#' && a[act.xl][act.yl]!='*' && visit[act.xm][act.ym][act.xl][act.yl]==-1){
            if (a[act.xm][act.ym]=='*'){
                if (a[act.xl][act.yl]=='B'){
                    visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                    cola.push(act);
                }
            }else{
                visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                cola.push(act);
            }
        }
        //arribam
        act=inicio;
        act.xm;
        act.ym--;
        act.xl;
        act.yl;
        act.p++;
        if (a[act.xm][act.ym]!='#' && a[act.xl][act.yl]!='*' && visit[act.xm][act.ym][act.xl][act.yl]==-1){
            if (a[act.xm][act.ym]=='*'){
                if (a[act.xl][act.yl]=='B'){
                    visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                    cola.push(act);
                }
            }else{
                visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                cola.push(act);
            }
        }
        //izql
        act=inicio;
        act.xm;
        act.ym;
        act.xl--;
        act.yl;
        act.p++;
        if (a[act.xl][act.yl]!='#' && a[act.xm][act.ym]!='*' && visit[act.xm][act.ym][act.xl][act.yl]==-1){
            if (a[act.xl][act.yl]=='*'){
                if (a[act.xm][act.ym]=='B'){
                    visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                    cola.push(act);
                }
            }else{
                visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                cola.push(act);
            }
        }
        //derl
        act=inicio;
        act.xm;
        act.ym;
        act.xl++;
        act.yl;
        act.p++;
        if (a[act.xl][act.yl]!='#' && a[act.xm][act.ym]!='*' && visit[act.xm][act.ym][act.xl][act.yl]==-1){
            if (a[act.xl][act.yl]=='*'){
                if (a[act.xm][act.ym]=='B'){
                    visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                    cola.push(act);
                }
            }else{
                visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                cola.push(act);
            }
        }
        //abajol
        act=inicio;
        act.xm;
        act.ym;
        act.xl;
        act.yl++;
        act.p++;
        if (a[act.xl][act.yl]!='#' && a[act.xm][act.ym]!='*' && visit[act.xm][act.ym][act.xl][act.yl]==-1){
            if (a[act.xl][act.yl]=='*'){
                if (a[act.xm][act.ym]=='B'){
                    visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                    cola.push(act);
                }
            }else{
                visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                cola.push(act);
            }
        }
        //arribal
        act=inicio;
        act.xm;
        act.ym;
        act.xl;
        act.yl--;
        act.p++;
        if (a[act.xl][act.yl]!='#' && a[act.xm][act.ym]!='*' && visit[act.xm][act.ym][act.xl][act.yl]==-1){
            if (a[act.xl][act.yl]=='*'){
                if (a[act.xm][act.ym]=='B'){
                    visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                    cola.push(act);
                }
            }else{
                visit[act.xm][act.ym][act.xl][act.yl]=act.p;
                cola.push(act);
            }
        }
    }
}
int main()
{
    memset(visit,-1,sizeof(visit));
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[j][i];
            if (a[j][i]=='M'){
                mx=j;
                my=i;
            }
            if (a[j][i]=='L'){
                lx=j;
                ly=i;
            }
            if (a[j][i]=='S'){
                resx=j;
                resy=i;
            }
        }
    }
    ura in;
    in.p=0;
    in.xm=mx;
    in.ym=my;
    in.yl=ly;
    in.xl=lx;
    visit[mx][my][lx][ly]++;
    cola.push(in);
    busqueda();
    cout << visit[resx][resy][resx][resy];
    return 0;
}
