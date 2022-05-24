#include "cluedo.h"

// Main
//	int Teoria(int c, int u, int a)

void ResolverCaso() {
	// FIXME
	int h=1,l=1,a=1;
	for (int i=1; 1<=360; i++){
        int x=0;
        x=Teoria(h,l,a);
        if (x==0){
            return;
        }
        if (x==1){
            h++;
        }
        if (x==2){
            l++;
        }
        if (x==3){
            a++;
        }
	}
}
