#include <iostream>

using namespace std;
int n,p,res,c;
int main()
{
    cin >> p >> n;
    for (int i=1; i<=n; i++){
        cin >> c;
        res+=c;
    }
    res=p-res;
    if (res<0){
        res=0;
    }
    cout << res;
    return 0;
}
