#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;


int solve(int64_t N){
	int st=0;
	while(N!=1){
		N-=(1<<int(log2(N)));
		N++; st++;
	}
	return st;
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

int main(){

	srand(284);

	for(int i=1;i<=100;i++){
		ofstream input, output;
		string name = "../cases/case";
		name+=stringify(i);
		input.open(name+".in");
		output.open(name+".out");

		int64_t N = rand();
		input << N;
		output << solve(N);

		input.close();
		output.close();

	}

}