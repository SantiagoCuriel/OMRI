#include <bits/stdc++.h>

using namespace std;

int n,a,ant,t,e,res;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a;
        if (a==1){
            if (ant!=1){
                t=1;
            }else{
                t++;
            }
        }else{
            if (ant!=2){
                e=1;
            }else{
                e++;
            }
        }
        ant=a;
        res=max(res,min(t,e));
    }
    cout << res*2;
    return 0;
}
