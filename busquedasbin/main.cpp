#include <iostream>

using namespace std;

int izq=1,der=101,mid,l;
int main()
{
    while (izq+1<der){
        mid=(izq+der)/2;
        cout << "El numero es mayor o igual que " << mid << "?" << '\n';
        cin >> l;
        if (l){
            izq=mid;
        }else{
            der=mid;
        }
    }
    cout << izq;
    return 0;
}
