#include <bits/stdc++.h>

using namespace std;

int n,q;
char arre[1000010];
struct ura{
    int a,c;
};
ura st[4000010];
vector <ura> res;

void build(int izq,int der,int nodo){
    if (izq==der){
        if (arre[izq]=='('){
            st[nodo].a++;
        }else{
            st[nodo].c++;
        }
        return;
    }
    int mid=(izq+der)/2;
    build(izq,mid,nodo*2+1);
    build(mid+1,der,nodo*2+2);
    st[nodo].a+=st[nodo*2+1].a;
    st[nodo].a+=st[nodo*2+2].a;
    st[nodo].c+=st[nodo*2+1].c;
    st[nodo].c+=st[nodo*2+2].c;
    if (st[nodo*2+1].a && st[nodo*2+2].c){
        int mn=min(st[nodo*2+2].c,st[nodo*2+1].a);
        st[nodo].a-=mn;
        st[nodo].c-=mn;
    }
    return;
}
void query(int l,int r, int izq, int der, int nodo){
    if (izq>r || der<l){
        return;
    }
    if (izq>=l && der<=r){
        res.push_back(st[nodo]);
        return;
    }
    int mid=(izq+der)/2;
    query(l,r,izq,mid,nodo*2+1);
    query(l,r,mid+1,der,nodo*2+2);
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> arre[i];
    }
    build(0,n-1,0);
    cin >> q;
    while (q--){
        int l,r;
        cin >> l >> r;
        l--;
        r--;
        query(l,r,0,n-1,0);
        ura fin;
        fin.a=0;
        fin.c=0;
        for (int i=0; i<res.size(); i++){
            //cout << res[i].a << "," << res[i].c << '\n';
            if (fin.a && res[i].c){
                int mn=min(fin.a,res[i].c);
                fin.a-=mn;
                res[i].c-=mn;
            }
            fin.a+=res[i].a;
            fin.c+=res[i].c;
        }
        cout << (r-l+1)-(fin.a+fin.c) << '\n';
        res.clear();
    }

    return 0;
}
