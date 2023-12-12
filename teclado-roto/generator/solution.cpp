#include <iostream>
#include <string>

using namespace std;

int main(){

	string S;
	cin >> S;

	for(int i = 0; i < S.size(); i++){
		if(S[i] == '0'){
			cout << ' ';
		} else if (S[i] == '1'){
			cout << '\n';
		} else if (S[i] == '2'){
			cout << '\\';
		} else {
			cout << S[i];
		}
	}

	return 0;
}
