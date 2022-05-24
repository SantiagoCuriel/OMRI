#include <bits/stdc++.h>

using namespace std;

long long int b,n,m;
int main()
{
    srand(time(NULL));
    cin >> b >> n >> m;
    if (rand()%2){
        cout << n/m;
    }else{
        cout << m/n;
    }


    return 0;
}
