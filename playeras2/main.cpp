#include <iostream>

using namespace std;

int n,h,k,arre[2000100],playera,altura,res;
int main()
{
    cin >> n >> h >> k;
    for (int i=1; i<=k; i++){
        cin >> playera >> altura;
        playera-=altura;
        if (playera<=0){
            arre[1]++;
        }else{
            arre[playera]++;
        }
        playera+=altura*2;
        if (playera>1000000){
            arre[1000001]--;
        }else{
            arre[playera+1]--;
        }
    }
    for (int i=1; i<=n; i++){
        arre[i]+=arre[i-1];
    }
    for (int i=1; i<=n; i++){
        if (arre[i]==0){
            i+=h*2;
            res++;
        }
    }
    cout << res;
    return 0;
}
