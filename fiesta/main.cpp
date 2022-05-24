 #include <bits/stdc++.h>

using namespace std;

long long int n,arre[100010],l,k;
long long int distancia(long long int x){
    long long int d=0;
    for (long long int i=1; i<=n; i++){
        d+=abs(x-arre[i]);
    }
    return d;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (long long int i=1; i<=n; i++){
        cin >> arre[i];
    }
    sort(arre+1,arre+n+1);
    long long int izq=0,der=n;
    while (izq+1<der){
        long long int mid=(izq+der)/2;
        l=distancia(arre[mid]);
        k=distancia(arre[mid]+1);
        if (l>k){
            izq=mid;
        }else{
            der=mid;
        }
    }
    cout << distancia(arre[der]);
    return 0;
}
