#include <iostream>

using namespace std;

int h,alt,a,b,res;
int main()
{
    cin >> h >> a >> b;
    while (1){
        res++;
        alt+=a;
        if (alt>=h){
            break;
        }
        alt-=b;
        res++;
    }
    cout << res;
    return 0;
}
