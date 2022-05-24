#include <bits/stdc++.h>

using namespace std;


long long int it=1,a[1000010];
string s="mycode";
int letra(char x){
    if (x=='a' || x=='A'){
        return 2;
    }
    if (x=='b' || x=='B'){
        return 22;
    }
    if (x=='c' || x=='C'){
        return 222;
    }
    if (x=='d' || x=='D'){
        return 3;
    }
    if (x=='e' || x=='E'){
        return 33;
    }
    if (x=='f' || x=='F'){
        return 333;
    }
    if (x=='g' || x=='G'){
        return 4;
    }
    if (x=='h' || x=='H'){
        return 44;
    }
    if (x=='i' || x=='I'){
        return 444;
    }
    if (x=='j' || x=='J'){
        return 5;
    }
    if (x=='k' || x=='K'){
        return 55;
    }
    if (x=='l' || x=='L'){
        return 555;
    }
    if (x=='m' || x=='M'){
        return 6;
    }
    if (x=='n' || x=='N'){
        return 66;
    }
    if (x=='o' || x=='O'){
        return 666;
    }
    if (x=='p' || x=='P'){
        return 7;
    }
    if (x=='q' || x=='Q'){
        return 77;
    }
    if (x=='r' || x=='R'){
        return 777;
    }
    if (x=='s' || x=='S'){
        return 7777;
    }
    if (x=='t' || x=='T'){
        return 8;
    }
    if (x=='u' || x=='U'){
        return 88;
    }
    if (x=='v' || x=='V'){
        return 888;
    }
    if (x=='w' || x=='W'){
        return 9;
    }
    if (x=='x' || x=='X'){
        return 99;
    }
    if (x=='y' || x=='Y'){
        return 999;
    }
    if (x=='z' || x=='Z'){
        return 9999;
    }
}
int main()
{

    while (s!="fin"){
        cin >> s;
        for (long long int i=0; i<s.size(); i++){
            a[it+i]=letra(s[i]);
        }
        it++;
        it+=s.size();
    }
    for (long long int i=1; i<=it-6; i++){
        cout << a[i] << 1;
    }
    return 0;
}
