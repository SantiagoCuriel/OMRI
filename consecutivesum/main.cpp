#include <iostream>

using namespace std;

int n;
int main()
{
    cin >> n;
    while (n--){
        long long int x;
        cin >> x;
        cout << -(x-1) << " " << x << '\n';
     }
    return 0;
}
