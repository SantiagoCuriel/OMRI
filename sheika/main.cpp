#include <bits/stdc++.h>

using namespace std;

long long int n,res,l;
struct ura{
    int h,d;
};
bool compara(ura a,ura b)
{
    return a.d<b.d;
}
ura arre[100001];
ura torre[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> arre[i].d>>arre[i].h;
    }
    sort(arre+1,arre+n+1,compara);
    int max_h=0;
    int lejos=0;
    for(int i=n;0<i;i++)
    {
        if(max_h<arre[i].h)
        {
            max_h=arre[i].h;
            lejos=arre[i].d;
        }
        torre[i].h=max_h;
        torre[i].d=lejos;
    }

    cout << res;
    return 0;
}
