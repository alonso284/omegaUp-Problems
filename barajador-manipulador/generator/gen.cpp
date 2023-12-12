#include <iostream>
#include <fstream>

using namespace std;

int main(){

	unsigned int R; cin >> R;

	srand(R);

	int N = 1000000;
	int64_t MAX = 1000000;
	int64_t MIN = MAX - 1000;
	int64_t M;

	cin >> N;
	cin >> MAX;
	cin >> MIN;
	cin >> M;

	cout << N << endl;

	for(int i = 0; i < N; i++)
		cout << MIN + rand() % (MAX - MIN) << ' ';

	cout << endl;

	cout << M - 10 + rand() % 10 << endl;


}
