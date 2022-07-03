// Alonso Huerta Escalante Feb 5, 2022 at 16:14
// Link:

#include <iostream>
#include <vector>
#include <algorithm>
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
	sum = k[0];
	while(ptr2<k.size()){
		if(sum>M){
			sum-=k[ptr1];
			ptr1++;
		}else{
			ptr2++; if(ptr2==k.size()) break;
			sum+=k[ptr2];
		}
		if(sum<=M) MAX = max(MAX, ptr2-ptr1+1);
	}
	cout << MAX;
}