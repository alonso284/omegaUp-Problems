#include <iostream>
#include <string>

using namespace std;

int main(){

	string S; cin >> S;
	for(int i=0;i<S.size();i++){
		if('A' <= S[i] && S[i] <= 'Z')
			cout << char(S[i]-'A'+'a');
		else cout << S[i];
	}

	return 0;
}