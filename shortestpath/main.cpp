#include <bits/stdc++.h>

using namespace std;

int t,xa,ya,xb,yb,fx,fy,res;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> xa >> ya >> xb >> yb >> fx >> fy;
        res=abs(xa-xb)+abs(ya-yb);
        if (fx==xa && fx==xb){
            if (fy>=ya && fy<=yb){
                res+=2;
            }
            if (fy<=ya && fy>=yb){
                res+=2;
            }
        }
        if (fy==ya && fy==yb){
            if (fx>=xa && fx<=xb){
                res+=2;
            }
            if (fx<=xa && fx>=xb){
                res+=2;
            }
        }
        cout << res << '\n';
    }
    return 0;
}
