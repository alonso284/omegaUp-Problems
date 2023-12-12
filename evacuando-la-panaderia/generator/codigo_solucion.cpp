#include <iostream>

using namespace std;

int main(){
	int N, M;
	cin >> N >> M;
	long long building[N][M+2];
	for(int i = 0; i < N; i++){
		building[i][0] = 0;
		for(int j = 1; j <= M; j++){
			cin >> building[i][j];
			building[i][j] += building[i][j-1];
		}
		building[i][M+1] = building[i][M];
	}

	long long etime = 1000000000000000;
	for(int j = 1; j <= M; j++){
		long long eftime = 0;
		for(int i = 0; i < N; i++){
			eftime = max(eftime, max(building[i][j-1], building[i][M+1] - building[i][j]));
		}
		etime = min(etime, eftime);
	}
	cout << etime;
	return 0;
}
