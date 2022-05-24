#include <iostream>

using namespace std;

int n,a[100010],k,in,fin,l;
int main()
{
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    in=1;
    fin=1;
    l=a[1];
    while (in<=n){
        if (l==k){
            cout << in << " " << fin << '\n';
            if (fin==n){
                return 0;
            }
            fin++;
            l+=a[fin];
        }
        if (l<k){
            if (fin==n){
                return 0;
            }
            fin++;
            l+=a[fin];
        }
        if (l>k){
            l-=a[in];
            in++;
        }
    }
    return 0;
}
