    #include <bits/stdc++.h>

    using namespace std;

    long long int n,a,b,c,mx,l;
    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cin >> n;
        while (n--){
            cin >> a >> b >> c;
            if (a==b && a==c){
                cout << 1 << " " << 1 << " " << 1 << '\n';
            }else{
                mx=max(a,max(b,c));
                a=mx-a+1;
                b=mx-b+1;
                c=mx-c+1;
                if (a==1){
                    if (a!=b && a!=c){
                        a--;
                    }
                }
                if (b==1){
                    if (b!=a && b!=c){
                        b--;
                    }
                }if (c==1){
                    if (c!=b && c!=a){
                        c--;
                    }
                }
                cout << a << " " << b << " " << c << " " << '\n';
                l=0;
            }
        }
        return 0;
    }
