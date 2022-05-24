#include <bits/stdc++.h>

using namespace std;

int n,arre[1000010],st[400010];
void build(int izq,int der,int nodo){
    if (izq==der){
        st[nodo]=arre[izq];
        return;
    }
    int mid=(izq+der)/2;
    build(izq,mid,nodo*2+1);
    build(mid+1,der,nodo*2+2);
    st[nodo]=st[nodo*2+1]+st[nodo*2+2] ;
}
int query(int l,int r,int izq,int der,int nodo){
    if (izq>r || der<l){
        return 0;
    }
    if (izq>=l && der<=r){
        return st[nodo];
    }
    int mid=(izq+der)/2;
    return max(query(l,r,izq,mid,nodo*2+1),query(l,r,mid+1,der,nodo*2+2));
}
int main()
{
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> arre[i];
    }
    build(0,n-1,0);
    while (1){
        int l,r;
        cin >> l >> r;
        cout << query(l,r,0,n-1,0) << '\n';
    }
    return 0;
}
