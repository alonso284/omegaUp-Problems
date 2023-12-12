#include <iostream>
#include <fstream>

using namespace std;

int main(){

	srand(284);

	for(int i=1;i<=5;i++){
		ofstream input, output;
		string name = "../cases/case";
		name+=to_string(i);;
		input.open(name+".in");
		output.open(name+".out");


		input.close();
		output.close();

	}

	cout << "DONE CREATING SAMPLE CASES";

}
