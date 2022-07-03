#include <iostream>
#include <string>

using namespace std;

int abc[26], M;
string S;

int main(){

	cin >> S; cin >> M;
	for(int i=0;i<S.size();i++)
		abc[int(S[i]-'a')]++;

	while(M--){
		char temp; cin >> temp;
		cout << abc[int(temp-'a')] << '\n';
	}




	return 0;
}