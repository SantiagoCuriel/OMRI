#include <bits/stdc++.h>
using namespace std;
struct ura{
    int d,h;
};
bool compara(ura a,ura b)
{
    return a.d<b.d;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ura arre[100000];
    cin>>n;
    for(int i=0;i<n;i++)cin>>arre[i].d>>arre[i].h;
    sort(arre,arre+n,compara);
    int ini=0;
    int fin=n-1;
    long long int res=0;
    while(ini<fin){
        long long int actual=(long long int)(arre[fin].d-arre[ini].d)*(long long int)(min(arre[ini].h,arre[fin].h));
        res=max(res,actual);
        if(arre[ini].h<arre[fin].h)ini++;
        else fin--;
    }
    cout<<res;
    return 0;
}
