#include <iostream>
#include <string>

using namespace std;

int main(){

	string S;
	cin >> S;

	int C = 0;
	for(int i = 0; i < S.size()/2; i++)
		C += (S[i] != S[S.size()-i-1]);
	cout <<  C;


	return 0;
}