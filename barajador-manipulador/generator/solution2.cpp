#include <iostream>

using namespace std;

int main(){

	int N; cin >> N;
	int arr[N]; for(int i = 0; i < N; i++) cin >> arr[i];
	int M; cin >> M;

	int start = 0;
	for(int i = 0; i < M; i++){
		start++;
		start%=N/2;
	}

	
	M = start;

	for(int i = N/2 - M; i < N/2; i++)
		cout << arr[i] << ' ';
	for(int i = 0; i < N/2 - M; i++)
		cout << arr[i] << ' ';
	for(int i = N/2 + M; i < N; i++)
		cout << arr[i] << ' ';
	for(int i = N/2; i < N/2 + M; i++)
		cout << arr[i] << ' ';

	return 0;
}
