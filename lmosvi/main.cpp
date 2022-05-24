#include <iostream>

using namespace std;

int n,m,r;
int main()
{
    cin >> n >> m;
    while (n>0 && m>0){
        if (n<m && n>0 && m>0){
            r+=m/n;
            m=m%n;
        }
        if (m<n && n>0 && m>0){
            r+=n/m;
            n=n%m;
        }
        if (n==m && n>0 && m>0){
            r++;
            m=0;
        }
    }
    cout << r << endl;
    return 0;
}
