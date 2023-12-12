#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int getSum(int a[], int N, int num){

	int q = 0;
	for(int i = 0; i < N; i++)
		q += a[i] / num;

	return q;
}


int binary(int ini, int fin, int a[], int M, int N){

	if(ini >= fin) return ini;

	int  mit = (ini + fin)/2;

	if(M  > getSum(a, N, mit))
		return binary(ini, mit, a, M, N);
	return binary(mit+1, fin, a, M, N);
}

int solve(int N, int M, int a[]){
	return binary(1, 2000, a, M, N);
}

int main(){

	srand(284);

	for(int i=1;i<=5;i++){
		ofstream input, output;
		string name = "../cases/case";
		name+=to_string(i);;
		input.open(name+".in");
		output.open(name+".out");

		int N = rand() % 1000 + 1000;
		int M = N + rand() % 50;
		input << N << ' '<< M << endl;

		int a[N];
		for(int i = 0; i < N; i++){
			a[i] = rand() % 100 + 1000;
			input << a[i] << ' ';
		}

		output << solve(N, M, a);


		input.close();
		output.close();

	}

	cout << "DONE CREATING SAMPLE CASES";

}
