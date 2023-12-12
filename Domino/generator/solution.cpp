#include <iostream>

using namespace std;

int opciones[1000006];

int main(){
	int A, B;
	int fichas;
	cin >> A >> B >> fichas;
	if(A > B) swap(A, B);

	bool AB, AA, BB;
	if(A == B){
		cout << 0;
		return 0;
	}
	AB = AA = BB = false;
	for(int i = 0; i < fichas; i++){
		int tA, tB; cin >> tA >> tB;
		if(tA > tB) swap(tA, tB);

		if(A == tA && tA == tB){
			AA = true;
			continue;
		}
		if(B == tA && tA == tB){
			BB = true;
			continue;
		}

		if(A == tA && B == tB){
			AB = true;
			continue;
		}
		
		if(tA == A) opciones[tB]++;
		if(tB == A) opciones[tA]++;
		if(tB == B) opciones[tA]++;
		if(tA == B) opciones[tB]++;

	}

	int res = 0;
	for(int i = 0; i < 1000006; i++){
		if(opciones[i] == 2) res++;
	}
	if(AB && BB) res++;
	if(AB && AA) res++;
	cout << res;
}
