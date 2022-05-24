#include <iostream>

using namespace std;
int c,k,n;
long long int a,b;
int main()
{
    cin >> a >> b >> c;
    k=a;
    n=b;
    for (int x=0; x<=5000000; x++){
        if (x%2==0){
            if (a==0){
                cout << x;
                break;
            }
            a+=b;
            a%=c;
        }
        if (x%2==1){
            if (b==0){
                cout << x;
                break;
            }
            b+=a;
            b%=c;
        }
        if (x==5000000){
            cout << -1;
            break;
        }
    }
    return 0;
    }
/*14 11
1 8
3 3
4 7
5 1
6 14
7 9
9 8
11 12
12 8
13 9
14 3
*/
