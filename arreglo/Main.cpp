#include "arreglo.h"
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int N;
int arre[100002];
int tries = 0;
int res=0;
int exitcode = 1;
const int maxTries = 70000;

int pos(int _) {
	if (_ >= N) {
		cout << "Posición invalida" << endl;
		exit(0);
	}
	if (tries++ >17) {
		cout << "Limite de llamadas excedida" << endl;
		exit(0);
	}


	return arre[_];
}

void answer(int _) {
	if (_ == res) {
		cout << "Respuesta correcta" << endl;
		exit(0);
	}


	cout << "Respuesta Incorrecta" << endl;

	exit(0);
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arre[i];
		res+=arre[i];
	}
	cuentaUnos(N);

	cout << "WA - No se llamó a respuesta" << endl;
	return 0;
}
