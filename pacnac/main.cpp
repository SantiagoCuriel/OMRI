#include <iostream>

using namespace std;
long long int n,s=1,res;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=234321;
        s%=123454321;
    }
    s=2;
    for (int i=2; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=343212;
        s%=123454321;
    }
    s=3;
    for (int i=3; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=432123;
        s%=123454321;
    }
    s=4;
    for (int i=4; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=321234;
        s%=123454321;
    }
    s=32;
    for (int i=5; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=123432;
        s%=123454321;
    }
    s=123;
    for (int i=6; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=432123;
        s%=123454321;
    }
    s=43;
    for (int i=7; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=212343;
        s%=123454321;
    }
    s=2123;
    for (int i=8; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=432123;
        s%=123454321;
    }
    s=432;
    for (int i=9; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=123432;
        s%=123454321;
    }
    s=1234;
    for (int i=10; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=321234;
        s%=123454321;
    }
    s=32123;
    for (int i=11; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=432123;
        s%=123454321;
    }
    s=43212;
    for (int i=12; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=343212;
        s%=123454321;
    }
    s=34321;
    for (int i=13; i<=n; i+=15){
        res+=s;
        res%=123454321;
        s*=1000000;
        s%=123454321;
        s+=234321;
        s%=123454321;
    }
    s=23432;
    for (int i=14; i<=n; i+=15){
        res+=s;
        s*=1000000;
        s%=123454321;
        s+=123432;
        s%=123454321;
    }
    s=123432;
    for (int i=15; i<=n; i+=15){
        res+=s;
        s*=1000000;
        s%=123454321;
        s+=123432;
        s%=123454321;
    }
    cout << res;
    return 0;
}
