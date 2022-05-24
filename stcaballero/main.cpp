#include <bits/stdc++.h>

using namespace std;

int n,arre[100010],st[400010],q;
void build(int izq, int der, int nodo){
    if (izq==der){
        st[nodo]=arre[izq];
        return;
    }
    int mid=(izq+der)/2;
    build(izq,mid,nodo*2+1);
    build(mid+1,der,nodo*2+2);
    st[nodo]=max(st[nodo*2+1],st[nodo*2+2]);
}
int query(int l, int r, int izq, int der, int nodo){
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
    cin >> q;
    while (q--){
        int l,r,a,b;
        cin >> l >> r;
        a=query(l,r,0,n-1,0);
        cin >> l >> r;
        b=query(l,r,0,n-1,0);
        if (a>b){
            cout << 1 << '\n';
        }
        if (a<b){
            cout << 2 << '\n';
        }
        if (a==b){
            cout << 0 << '\n';
        }
        cout << a << " " << b ;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
/*
6
3 7 5 8 9 5
3

*/
