#include <iostream>

using namespace std;

int l;
int main()
{
    for (long long int i=1000; i<=10000000000LL; i++){
        for (int j=1; j<=20; j++){
            if (i%j==0){
                l++;
            }
            if (l==20){
                cout << i;
                return 0;
            }
        }
        l=0;
    }
    return 0;
}
