#include <iostream>

using namespace std;

int n,m,res;
int main()
{
    cin >> n >> m;
    while (n>0 && m>0){
        if (n>=m){
            res+=n/m;
            n%=m;
        }else{
            res+=m/n;
            m%=n;
        }
    }
    cout << res << endl;
    return 0;
}
