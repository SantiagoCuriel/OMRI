#include <bits/stdc++.h>

using namespace std;

int t,n,arre[110];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        int res=0,rep=0;
        for (int i=1; i<=n; i++){
            cin >> arre[i];
            /*for (int j=1; j<i; j++){
                if (arre[j]==arre[i]){
                    rep++;
                    break;
                }
            }*/
            res=max(res,arre[i]-i+rep);
        }
        cout << res << '\n';
    }
    return 0;
}
/*
1

1

1

2

1

3

2

1 1

2

1 2

2

1 3

2

2 1

2

2 2

2

2 3

2

3 1

2

3 2

2

3 3

3

1 1 1

3

1 1 2

3

1 1 3
*/
