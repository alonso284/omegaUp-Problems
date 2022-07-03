#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;

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
		while(l--){
			int letter = rand()%26;
			bool cap = rand()%2;
			S += char(letter + (cap?'a':'A'));
		}

		input << S;
		reverse(S.begin(), S.end());
		output << S;

		input.close();
		output.close();

	}

}