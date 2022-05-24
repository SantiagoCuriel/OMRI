#include <bits/stdc++.h>

using namespace std;

int n,arre[100010],st[1000010],q,in=0,fin,nodo,mx;
void build(int izq, int der, int nodo){
    if (izq==der){
        st[nodo]=1;
        return;
    }
    int mid=(izq+der)/2;
    build(izq,mid,nodo*2+1);
    build(mid+1,der,nodo*2+2);
    st[nodo]=st[nodo*2+1]+st[nodo*2+2];
}
int query(int l, int r, int izq, int der, int nodo){
    if (izq>r || der<l){
        return 0;
    }
    if (izq>=l && der<=r){
        return st[nodo];
    }
    int mid=(izq+der)/2;
    return query(l,r,izq,mid,nodo*2+1)+query(l,r,mid+1,der,nodo*2+2);
}
void update(int l, int r, int izq, int der, int nodo{
    if (izq>r || der<l){
        return;
    }
    if (izq==der){
        st[nodo+((r-izq)*2)+1]+=st[nod];
        mx=max(mx,izq+((r-izq)*2)+1);
    }
    int mid=(izq+der)/2;
    update(l,r,izq,mid,nodo*2+1);
    update(l,r,mid+1,der,nodo*2+2);
}
int main()
{
    cin >> n >> q;
    build(0,n,0);
    fin=n;
    while (q--){
        int p,l,r,x;
        cin >> x;
        if (x==1){
            cin >> p;
            update(in,in+p,in,fin,nodo);
        }else{
            cin >> l >> r;
            query(l,r,in,n+in,0);
        }
    }
    return 0;
}
