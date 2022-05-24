#include <iostream>

using namespace std;

int t;
int main()
{
    cin >> t;
    while (t--){
        int a,b,c;
        cin >> a >> b >> c >> c >> c >> c >> c;
        cout << a << " " << b << " " << c-a-b << '\n';
    }
    return 0;
}
