#include <iostream>

using namespace std;

int n,k,arre[1000010],restantes,res,visit[1000010],mx;
int main()
{
    cin >> n >> k;
    restantes=n;
    for (int i=1; i<=n; i++){
        cin >> arre[i];
        if (arre[i]>=k){
            visit[i]++;
            restantes--;
            res+=k;
        }
    }
    if (restantes==n){
        for (int i=1; i<=n; i++){
            if (arre[i]>arre[mx]){
                mx=i;
            }
        }
        visit[mx]++;
        res+=k;
        restantes--;
    }
    for (int i=1; restantes; i++){
        if (visit[i]){
            for (int j=i-1; visit[j]==0; j--){
                if (j==0){
                    j=n+1;
                }else{
                    res+=arre[j];
                    restantes--;
                }

            }
        }
    }
    cout << res;
    return 0;
}
