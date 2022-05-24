#include <iostream>

using namespace std;


int main()
{
    int izq=0,der=5000;
    while (izq+1<der){
        int mid=(izq+der)/2;
        cout << "El numero es mayor o igual a " << mid << "?" <<'\n';
        int l;
        cin >> l;
        if (l){
            izq=mid;
        }else{
            der=mid;
        }
    }
    cout << "Tu numero es " << izq;
    return 0;
}
