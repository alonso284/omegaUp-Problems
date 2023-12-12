#include <iostream>
#include <set>

using namespace std;

int main(){

	int A, B, C;
	cin >> A >> B >> C;
	set < pair < int, int > > fichas;
	for(int i = 0 ; i < C; i++){
		int d, e; cin >> d >> e;
		if(d > e) swap(d, e);
		if(fichas.count({d, e})) return 0;
		fichas.insert({d, e});
	}
	cout << "GOOD";


	return 0;
}
