#include <bits/stdc++.h>

using namespace std;

int n,k,l,a[2000010],act,x,y,res,acant,rcant;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    l=k;
    x=n;
    y=n;
    sort(a+1,a+n+1);
    while (x>1){
        if (a[x-1]+l>=a[y]){
            l-=a[y]-a[x-1];
            x--;
        }else{
            l+=(y-x)*(a[y]-a[y-1]);
            y--;
        }
        if (res<=(y-x)+1){
            res=y-x+1;
            rcant=a[y];
        }
    }
    if (x==1){
        cout << 1 << " " << a[1];
        return 0;
    }
    cout << res << " " << rcant;
    return 0;
}
