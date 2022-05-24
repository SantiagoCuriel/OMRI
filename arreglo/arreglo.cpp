#include "arreglo.h"

// Main
//	int pos(int P)
//	void answer(int N)

void cuentaUnos(int N) {
	// FIXME
	for (int i=0; i<N; i++){
        int l=pos(i);
        if (l){
            answer(N-i);
        }
	}
}
