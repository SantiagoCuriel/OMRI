#include <iostream>

using namespace std;

int n,c,k,f1=1,f2=2,f3=3,i=1;
void lectura(){
    cin >> n;
}
int impar(int num){
    if(num%2==1){
        return 1;
    }
    return 0;
}
void fib(){
    while (i<=n){
        if (i==f1){
            f1=f2;
            f2=f3;
            f3=f2+f1;
            c++;
        }
        i++;
    }
    cout<< c <<" ";
}
void resuelve(){
    while (i<=n){
        k+=impar(i);
        i++;
    }
    cout<< k;
}
int main()
{
    lectura();
    fib();
    i=1;
    resuelve();
    return 0;
}
