#include <bits/stdc++.h>

using namespace std;

long long int n,izq=1,der=INT_MAX;
long long int digitos(long long int dig){
    long long int res=0;
    if (dig>9){
        res+=9;
    }else{
        res=dig;
        return res;
    }
    if (dig>99){
        res+=90*2;
    }else{
        res+=((dig-10)+1)*2;
        return res;
    }
    if (dig>999){
        res+=900*3;
    }else{
        res+=((dig-100)+1)*3;
        return res;
    }
    if (dig>9999){
        res+=9000*4;
    }else{
        res+=((dig-1000)+1)*4;
        return res;
    }
    if (dig>99999){
        res+=90000*5;
    }else{
        res+=((dig-10000)+1)*5;
        return res;
    }
    if (dig>999999){
        res+=900000*6;
    }else{
        res+=((dig-100000)+1)*6;
        return res;
    }
    if (dig>9999999){
        res+=9000000*7;
    }else{
        res+=((dig-1000000)+1)*7;
        return res;
    }
    if (dig>99999999){
        res+=90000000*8;
    }else{
        res+=((dig-10000000)+1)*8;
        return res;
    }
    if (dig>999999999){
        res+=900000000*9;
    }else{
        res+=((dig-100000000)+1)*9;
        return res;
    }
    if (dig>9999999999){
        res+=9000000000*10;
    }else{
        res+=((dig-1000000000)+1)*10;
        return res;
    }
}
int main()
{
    cin >> n;
    der=n;
    while (izq+1<der){
        long long int mid=(izq+der)/2LL;
        long long int actual=digitos(mid);
        if (actual>=n){
            der=mid;
        }else{
            izq=mid;
        }
    }
    if (digitos(izq)==n){
        cout << izq;
    }else{
        cout << der;
    }
    return 0;
}
