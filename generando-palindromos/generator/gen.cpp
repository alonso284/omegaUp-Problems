#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;

int solve(string S){
	int C = 0;
	for(int i = 0; i < S.size()/2; i++)
		C += (S[i] != S[S.size()-i-1]);
	return C;
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

	for(int i=1;i<=10;i++){
		ofstream input, output;
		string name = "../cases/case";
		name+=stringify(i);
		input.open(name+".in");
		output.open(name+".out");

		int l = rand()%1000+100;
		string S;
		for(int j=0; j < l; j++){
			int letter = rand()%26;
			bool rep = rand()%2;

			if(rep && j > l/2){
				S += S[l-j-1];
			}else{
				S += char(letter+'a');
			}
		}

		input << S;
		output << solve(S);

		input.close();
		output.close();

	}

}