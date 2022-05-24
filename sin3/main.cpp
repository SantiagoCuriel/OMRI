#include <iostream>

using namespace std;

int n,q,arre[2010];
int main()
{
    int it=1;
    for (int i=1; i<=1666; i++){
        if (i%3!=0 && i%10!=3){
            arre[it]=i;
            it++;
        }
    }
    cin >> q;
    while (q--){
        int x;
        cin >> x;
        cout << arre[x] << '\n';
    }
    return 0;
}
