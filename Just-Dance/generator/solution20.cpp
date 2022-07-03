// Alonso Huerta Escalante Feb 5, 2022 at 16:14
// Link:

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*
cd Documents/Github/Competitive-Programming/'OMI YUC 2022'
g++ B.cpp -std=c++17
*/



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int64_t M, N;
	cin >> M >> N;
	vector<int64_t>k(N);
	for(int i=0;i<N;i++)
		cin >> k[i];

	int64_t MAX = 0, ptr1 = 0, ptr2 = 0, sum = 0;
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++){
			sum = 0;
			for(int u=i;u<=j;u++)
				sum += k[u];

			if(sum <= M)
				if(j-i+1 > MAX)
					MAX = j-i+1;
		}
	cout << MAX;
}