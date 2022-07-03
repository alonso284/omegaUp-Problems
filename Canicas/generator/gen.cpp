#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

vector<int> primos;
bool criba[10004];

void generarPrimos(){

	for(int64_t i=2;i < 10004; i++){
		if(!criba[i]){
			primos.push_back(i);
			for(int64_t j = i * i ; j < 10004; j+=i){
				criba[j] = true;
			}
		}
	}

	return;
}

int binary(int ini, int fin, int prime){
	if(ini >= fin) return ini;

	int mit = (ini+fin)/2;
	//cout << "Buscando " << prime << " entre " << ini << " y " << fin << " " << primos[mit] <<endl;

	if(primos[mit] >= prime) return binary(ini, mit, prime);
	else return binary(mit+1, fin, prime);

}

string stringify(int N){
	string out;
	while(N){
		out.push_back(char('0'+N%10));
		N/=10;
	}
	reverse(out.begin(),out.end());
	return out;
}

int64_t solve(int64_t m, int64_t n){

	cout << "Calculando combinaciones de " << m << " en " << n  << endl;
	int64_t res = 1;
	int64_t mult = n;
	for(int64_t i = m; i >= m-n; i--){
		res *= i;
		if(mult > 1 && res%mult==0) res/=mult--; 
	}
	return res;
}

int main(){

	srand(284);

	generarPrimos();

	for(int i=1;i<=5;i++){
		ofstream input, output;
		string name = "../cases/case";
		name+=stringify(i);
		input.open(name+".in");
		output.open(name+".out");


		int A = rand()%5000+2;
		int B = A + rand()%150+50;

		input << A << ' ' << B << endl;
		input << 5 << endl;

		int Q = 5;
		int fin = binary(0, primos.size()-1,B), ini = binary(0, primos.size()-1, A);

		int64_t cantidadDePrimos = fin-ini+(primos[ini] == B);
		while(Q--){
			int N = rand()%cantidadDePrimos;
			if(N==0) N = 5;
			input << N << '\n';
			output << solve(cantidadDePrimos, N) << '\n';

		}

		input.close();
		output.close();

	}

	cout << "DONE CREATING SAMPLE CASES";

}