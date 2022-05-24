#include <iostream>

using namespace std;
int a[6],k[110],l,s=-1;
int main()
{
  	for (int i=1; i<6; i++){
        cin >> a[i];
    }
    for (int i=1; i<=5; i++){
        for (int j=i+1; j<=5; j++){
            if (a[i]==a[j]){
                k[a[i]]++;
                a[j]=s;
                s--;
            }
        }
    }
    for (int i=1; i<=100; i++){
        l=max(l,k[i]);
    }
    l++;
    if (l==1){
    		cout << "Muy diferentes";
    }
  	if (l==2){
    		cout << "Diferentes";
    }
    if (l==3){
    		cout << "Iguales";
    }
    if (l==4){
    		cout << "Muy iguales";
    }
    if (l==5){
    		cout << "Identicamente iguales";
    }
    return 0;
}
