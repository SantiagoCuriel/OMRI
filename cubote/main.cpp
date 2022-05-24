#include <bits/stdc++.h>

using namespace std;

 long long int res,n,a,b,c,d,e,f,p,p2,p3,res3;
int main()
{
    cin >> n >> a >> b >> c >> d >> e >> f;
    if (n==1){
        p=max(a,max(b,max(c,max(d,max(e,f)))));
        res=a+b+c+d+e+f-p;
        cout << res;
        return 0;
    }
    p=min(a,min(b,min(c,min(d,min(e,f)))));
    if (p==a){
        p2=min(e,min(b,min(c,d)));
        if (p2==e){
            p3=min(c,d);
        }else{
            if (p2==b){
                p3=min(c,d);
            }else{
                if (p2==c){
                    p3=min(e,b);
                }else{
                    if (p2==d){
                        p3=min(e,b);
                    }
                }
            }
        }
    }
    if (p==b){
        p2=min(a,min(f,min(c,d)));
        if (p2==a){
            p3=min(c,d);
        }else{
            if (p2==f){
                p3=min(c,d);
            }else{
                if (p2==c){
                    p3=min(a,f);
                }else{
                    if (p2==d){
                        p3=min(a,f);
                    }
                }
            }
        }
    }
    if (p==c){
        p2=min(e,min(f,min(a,b)));
        if (p2==e){
            p3=min(a,f);
        }else{
            if (p2==b){
                p3=min(a,f);
            }else{
                if (p2==f){
                    p3=min(e,b);
                }else{
                    if (p2==a){
                        p3=min(e,b);
                    }
                }
            }
        }
    }
    if (p==d){
        p2=min(e,min(f,min(b,a)));
        if (p2==e){
            p3=min(f,a);
        }else{
            if (p2==b){
                p3=min(f,a);
            }else{
                if (p2==f){
                    p3=min(e,b);
                }else{
                    if (p2==a){
                        p3=min(e,b);
                    }
                }
            }
        }
    }
    if (p==e){
        p2=min(f,min(a,min(c,d)));
        if (p2==f){
            p3=min(c,d);
        }else{
            if (p2==a){
                p3=min(c,d);
            }else{
                if (p2==c){
                    p3=min(f,a);
                }else{
                    if (p2==d){
                        p3=min(f,a);
                    }
                }
            }
        }
    }
    if (p==f){
        p2=min(e,min(b,min(c,d)));
        if (p2==e){
            p3=min(c,d);
        }else{
            if (p2==b){
                p3=min(c,d);
            }else{
                if (p2==c){
                    p3=min(e,b);
                }else{
                    if (p2==d){
                        p3=min(e,b);
                    }
                }
            }
        }
    }
    res+=p*(n*n);
    res+=((p*(n*(n-1)))+n*p2)*2;
    res3+=p*((n-2)*(n-1));
    res3+=p2*((n-1)*2);
    res3+=p3*2;
    res3+=p2*(n-2);
    res3*=2;
    res+=res3;
    cout << res;
    return 0;
}
