#include <bits/stdc++.h>

using namespace std;

float a,b,c,res1,res2;
int main()
{
    cin >> a >> b >> c;
    float x = (-b+sqrt(b*b-4*a*c))/(2*a);
    float y = (-b-sqrt(b*b-4*a*c))/(2*a);
    res1=b*b-(4*a*c);
    res2=b*b-(4*a*c);
    res1=sqrt(res1);
    res2=sqrt(res2);
    res1+=-b;
    res2-=-b;
    res1/=2*a;
    res2/=2*a;
    //cout << res1 << " " << res2 << '\n';
    cout<<x<<" "<<y<<"\n";
    return 0;
}
