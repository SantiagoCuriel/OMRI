#include <iostream>

using namespace std;

long long int n,s,e,o,n2,s2,e2,o2;
int main()
{
    cin >> n >> n2 >> s >> s2 >> e >> e2 >> o >> o2;
    if (n==s){
        cout << n << " ";
    }
    if (n==e){
        cout << n << " ";
    }
    if (n==o){
        cout << n << " ";
    }
    if (s==e){
        cout << s << " ";
    }
    if (s==o){
        cout << s << " ";
    }
    if (e==o){
        cout << o << " ";
    }
    if (n2==s2){
        cout << n2;
    }
    if (n2==e2){
        cout << n2;
    }
    if (n2==o2){
        cout << n2;
    }
    if (s2==e2){
        cout << e2;
    }
    if (s2==o2){
        cout << o2;
    }
    if (e2==o2){
        cout << o2;
    }
    return 0;
}
