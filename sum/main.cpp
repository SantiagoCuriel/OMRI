#include <iostream>

using namespace std;

long long int s;
int main()
{
    s+=(100*101)/2;
    s*=s;
    for (int i=1; i<=100; i++){
        s-=i*i;
    }
    cout << s;
    return 0;
}
