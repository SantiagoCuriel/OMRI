#include <iostream>
#include <algorithm>

using namespace std;

int n,k,k2,a[2000002],cabeza,cola,res_bot,res_mil;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    k2=k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    cola=n;
    cabeza=n+1;
    sort(a+1,a+n+1);
    while (cabeza>1){
        if (a[cabeza-1]+k2>=a[cola]){
            cabeza--;
            k2-=a[cola]-a[cabeza];
        }else{
            k2+=(cola-cabeza)*(a[cola]-a[cola-1]);
            cola--;
        }
        if (res_bot<=(cola-cabeza)+1){
            res_bot=cola-cabeza+1;
            res_mil=a[cola];
        }
    }
    cout << res_bot << " " << res_mil;
    return 0;
}
