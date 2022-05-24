#include <iostream>

using namespace std;

int n,s,b,r,d;
int main()
{
    cin >> n >> s >> b;
    while (1){
        if (d+s<n){
            r+=2;
            d+=s-b;
        }else{
            r++;
            break;
        }
    }
    cout << r;
    return 0;
}
