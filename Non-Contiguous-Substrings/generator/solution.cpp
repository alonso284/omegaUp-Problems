#include <iostream>
#include <string>

using namespace std;

int main(){

	string S; cin >> S;
	string resultado;

	for(int i=0; i<S.size(); i+=1){
		if(S[i] >= 'A' && S[i] <= 'Z'){
			resultado += (S[i] - 'A' + 'a');
		}else{
			resultado += S[i];
		}
	}

	cout << resultado;

	return 0;
}