#include <bits/stdc++.h>
#include "primo.h"

// Main
//	int primo(int posicion)

int busca(int n) {
    bool arre[n+3];
    int prim[1000000],bandera=0,p,izq,der;
    memset(arre,0,sizeof(arre));
    memset(prim,0,sizeof(prim));
    p=sqrt(n);
    for (int i=2; i<=p; i++){
        if (!arre[i]){
            for (int j=i*i; j<=n; j+=i){
                arre[j]=1;
            }
        }
    }
    for (int i=2; i<=n; i++){
        if (!arre[i]){
            prim[bandera++]=i;
        }
    }
    izq=-1;
    der=bandera;
    while (izq+1<der){
        int mid=(izq+der)/2;
        bandera=primo(mid);
        if (prim[mid]!=bandera){
            der=mid;
        }else{
            izq=mid;
        }
    }
	return prim[der];
}
