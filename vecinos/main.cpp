#include <bits/stdc++.h>

using namespace std;

int t,n,mn;
string s[1010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        mn=INT_MAX;
        int ult=0;
        cin >> n;
        getline(cin,s[0]);
        for (int i=1; i<=n; i++){
            getline(cin,s[i]);
            int x=s[i].size(),vecinos=1;
            for (int j=0; j<x; j++){
                if (s[i][j]==' '){
                    vecinos++;
                }
            }
            mn=min(vecinos,mn);
            if (vecinos==mn){
                ult=i;
            }
        }
        for (int i=1; i<=n; i++){
            int x=s[i].size(),vecinos=1;
            for (int j=0; j<x; j++){
                if (s[i][j]==' '){
                    vecinos++;
                }
            }
            if (vecinos==mn){
                if (i!=ult){
                    cout << i << " ";
                }else{
                    cout << i;
                }
            }
        }
        cout<<'\n';
        //getline(cin,s[0]);
    }
    return 0;
}
