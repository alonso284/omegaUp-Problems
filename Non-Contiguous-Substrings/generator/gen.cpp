#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;

string solve(string S, string sub){
	int ptr = 0;
	for(int i = 0; i < S.size() && ptr < sub.size(); i++){
		if(S[i] == sub[ptr]) ptr++;
	}

	return (ptr == sub.size()? "SI":"NO");
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

		int l = rand()%1000+100;
		string S;
		for(int j=0; j < l; j++){
			int letter = rand()%26;
			S += char(letter+'a');
		}

		l = 15;
		string sub;
		for(int j=0; j < l; j++){
			int letter = rand()%26;
			sub += char(letter+'a');
		}

		input << S << '\n' << sub;
		output << solve(S, sub);



		input.close();
		output.close();

	}

}