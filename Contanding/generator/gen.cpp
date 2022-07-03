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

		int abc[26]; for(int j=0;j<26;j++) abc[j] = 0;

		int l = rand()%1000+100;
		string S;
		for(int j=0; j < l; j++){
			int letter = rand()%26;
			S += char(letter+'a');
			abc[letter]++;
		}

		input << S << endl;
		input << l << endl;
		while(l--){
			int temp = rand()%26;
			input << char(temp+'a') << endl;
			output << abc[temp] << endl;
		}


		input.close();
		output.close();

	}

}