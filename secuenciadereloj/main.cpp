#include <bits/stdc++.h>

using namespace std;

long long int n,arre[]={1,2,3,4,32,123,43,2123,432,1234,32123,43212,34321,23432,123432},res,it;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        res+=arre[it]%123454321;
        res%=123454321;
        if(it==0||it==12){
            arre[it]=(arre[it]*10+2);
            arre[it]=(arre[it]*10+3);
            arre[it]=(arre[it]*10+4);
            arre[it]%=123454321;
            arre[it]=(arre[it]*10+3);
            arre[it]=(arre[it]*10+2);
            arre[it]=(arre[it]*10+1);
            arre[it]%=123454321;
        }
        if(it==1||it==11){
            arre[it]=(arre[it]*10+3);
            arre[it]=(arre[it]*10+4);
            arre[it]=(arre[it]*10+3);
            arre[it]%=123454321;
            arre[it]=(arre[it]*10+2);
            arre[it]=(arre[it]*10+1);
            arre[it]=(arre[it]*10+2);
            arre[it]%=123454321;
        }
        if(it==2||it==5||it==7||it==10){
            arre[it]=(arre[it]*10+4);
            arre[it]=(arre[it]*10+3);
            arre[it]=(arre[it]*10+2);
            arre[it]%=123454321;
            arre[it]=(arre[it]*10+1);
            arre[it]=(arre[it]*10+2);
            arre[it]=(arre[it]*10+3);
            arre[it]%=123454321;
        }
        if(it==3||it==9){
            arre[it]=(arre[it]*10+3);
            arre[it]=(arre[it]*10+2);
            arre[it]=(arre[it]*10+1);
            arre[it]%=123454321;
            arre[it]=(arre[it]*10+2);
            arre[it]=(arre[it]*10+3);
            arre[it]=(arre[it]*10+4);
            arre[it]%=123454321;
        }
        if(it==4||it==8||it==13||it==14){
            arre[it]=(arre[it]*10+1);
            arre[it]=(arre[it]*10+2);
            arre[it]=(arre[it]*10+3);
            arre[it]%=123454321;
            arre[it]=(arre[it]*10+4);
            arre[it]=(arre[it]*10+3);
            arre[it]=(arre[it]*10+2);
            arre[it]%=123454321;
        }
        if(it==6){
            arre[it]=(arre[it]*10+2);
            arre[it]=(arre[it]*10+1);
            arre[it]=(arre[it]*10+2);
            arre[it]%=123454321;
            arre[it]=(arre[it]*10+3);
            arre[it]=(arre[it]*10+4);
            arre[it]=(arre[it]*10+3);
            arre[it]%=123454321;
        }
        it++;
        it%=15;
    }
    cout << res;
    return 0;
}
