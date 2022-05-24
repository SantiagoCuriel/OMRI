#include <iostream>

using namespace std;

int n,m;
int main()
{
    cin >> n;
    while (1){
        cin >> n;
        m=m+n;
        if (n==0){
            break;
        }
    }
    cout<< m+1;
    return 0;
}
