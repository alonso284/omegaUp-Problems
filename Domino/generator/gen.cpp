#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main(){

	srand(284);

	for(int i=1;i<=2;i++){
		ofstream input, output;
		string name = "./cases/case";
		name+=to_string(i);;
		input.open(name+".in");
		output.open(name+".out");

		int a = 1;
		int b = 0;

		int iter = 1000;
		input << a << ' ' << b << endl;
		input << iter << endl;

		set< pair <int, int> > fichas;
		fichas.insert({-1, -1});

		for(int t = 0; t < iter; t++){
			int tempA = -1;
			int tempB = -1;
			while(fichas.count({tempA, tempB})){
				tempA = rand() % 1000000;
				tempB = rand() % 1000000;
				if(rand() % 3 == 0) tempB = 1;
				if(rand() % 3 == 0) tempA = 0;
				if(tempA > tempB) swap(tempA, tempB);
				if (tempA == 0 && tempB == 0) tempB = tempA = -1;
				if (tempA == 1 && tempB == 1) tempB = tempA = -1;
			}
			fichas.insert({tempA, tempB});
			input << tempA << ' ' << tempB << endl;
		}

		input.close();
		output.close();

	}

	cout << "DONE CREATING SAMPLE CASES";

}
