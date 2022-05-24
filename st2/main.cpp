#include <bits/stdc++.h>

using namespace std;

int n,arre[1010],st[4010],lp[4010];
void build(int izq,int der,int nodo){
    if (izq==der){
        st[nodo]=arre[izq];
        return;
    }
    int mid=(izq+der)/2;
    build(izq,mid,nodo*2+1);
    build(mid+1,der,nodo*2+2);
    st[nodo]=min(st[nodo*2+1],st[nodo*2+2]);
}
int query(int l,int r,int izq,int der, int nodo){
    if (izq>r || der<l){
        return INT_MAX;
    }

    if (izq>=l && der<=r){
        return st[nodo]+lp[nodo];
    }
    lp[nodo*2+1]+=lp[nodo];
    lp[nodo*2+2]+=lp[nodo];
    st[nodo]+=lp[nodo];
    lp[nodo]=0;
    int mid=(izq+der)/2;
    return min(query(l,r,izq,mid,nodo*2+1),query(l,r,mid+1,der,nodo*2+2));
}
void update(int izq, int der, int nodo, int valor,int pos){
    if (izq>pos || der<pos){
        return;
    }
    if (izq==pos && der==pos){
        st[nodo]=valor;
        return;
    }
    lp[nodo*2+1]+=lp[nodo];
    lp[nodo*2+2]+=lp[nodo];
    st[nodo]+=lp[nodo];
    lp[nodo]=0;
    int mid=(izq+der)/2;
    update(izq,mid,nodo*2+1,valor,pos);
    update(mid+1,der,nodo*2+2,valor,pos);
    st[nodo]=min(st[nodo*2+1],st[nodo*2+2]);
}
void update2(int l, int r, int izq, int der, int nodo, int valor){
    if (izq>r || der<l){
        return;
    }
    if (izq>=l && der<=r){
        lp[nodo]+=valor;
        return;
    }
    int mid=(izq+der)/2;
    lp[nodo*2+1]+=lp[nodo];
    lp[nodo*2+2]+=lp[nodo];
    st[nodo]+=lp[nodo];
    lp[nodo]=0;
    update2(l,r,izq,mid,nodo*2+1,valor);
    update2(l,r,mid+1,der,nodo*2+2,valor);
    st[nodo]=min(st[nodo*2+1]+lp[nodo*2+1],st[nodo*2+2]+lp[nodo*2+2]);
}
int main()
{
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> arre[i];
    }
    build(0,n-1,0);
    while (1){
        int l,r,valor,p;
        cin >> valor >> l >> r;
        update2(l,r,0,n-1,0,valor);
        cin >> l >> r;
        cout << query(l,r,0,n-1,0) << '\n';
    }
    return 0;
}
