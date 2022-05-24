#include <bits/stdc++.h>

using namespace std;

double n,a[1010];
double inclinacion(double x){
    double r=0;
    for (int i=1; i<=n; i++){
        r+=1/(a[i]-x);
        //cout<<a[i]<<" ";
    }
    //cout<<"\n";
    return r;
}
double binaria(double izq,double der){

    while(izq+0.000001<der){
        double mid=(izq+der)/2;
        double x=inclinacion(mid);
        double y=inclinacion(mid+0.000001);
        double dif=x-y;
        if (abs(x)-abs(y)>0){
            izq=mid;
        }else{
            der=mid;
        }
    }
    return der;
}
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    cout<<n-1<<"\n";
    int k=n;
    sort(a+1,a+k+1);
    for (int i=1; i<n; i++){
        double p=binaria(a[i],a[i+1]);
        cout << setprecision(3)<<fixed << p << " ";
        //cout<<a[i]<<" ";
    }/*
    while(1)
    {
        double x;
        cin>>x;
        cout<<inclinacion(x)<<"\n";
    }*/
    return 0;
}
