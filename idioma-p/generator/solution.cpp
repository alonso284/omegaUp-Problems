#include <iostream>
#include <string>

using namespace std;

int main(){

	string line;
	getline(cin, line);

	for(int i = 0; i < line.size(); i++){
		cout << line[i];
		if(isalpha(line[i])){
				char car = tolower(line[i]);
				if(car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u') cout << 'p' << car;
		}
	}

	return 0;
}
