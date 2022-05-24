#include <iostream>

using namespace std;

long long int n,i=1,c=1,ph1,ph2,ph3;
void unomas(){
    for (long long int k=1; k<n-1; k++){
        c+=(c+i)% 987654321;
        i=(i*2)%987654321;
    }
}
int main()
{
    cin >> n;
    unomas();
    ph1=c%987654321;
    ph2=c+i%987654321;
    c+=(c+i)%987654321;
    ph3=c%987654321;
    cout << (ph1+ph2+ph3)%987654321 << endl;
    return 0;
}
