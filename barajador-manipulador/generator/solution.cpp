#include <iostream>

using namespace std;

int main(){
	int N; cin >> N;
	int64_t arr[N];
	for(int i = 0; i < N; i++) cin >> arr[i];
	int64_t M; cin >> M;

	M %= N/2;

	for(int i = N/2 - M; i < N/2; i++)
		cout << arr[i] << ' ';
	for(int i = 0; i < N/2 - M; i++)
		cout << arr[i] << ' ';
	for(int i = N/2 + M; i < N; i++)
		cout << arr[i] << ' ';
	for(int i = N/2; i < N/2 + M; i++)
		cout << arr[i] << ' ';
}
