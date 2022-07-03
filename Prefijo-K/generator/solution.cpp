#include <iostream>
#include <string>

using namespace std;

int main(){

	int k; cin >> k;

	string S; getline(cin, S); getline(cin, S);

	for(int i=0;i<k;i++) cout << S[i];

	return 0;
}