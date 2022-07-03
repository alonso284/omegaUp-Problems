#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;


int64_t solve(int64_t M, int64_t N, vector<int64_t> &k){
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
	return MAX;
}

string stringify(int64_t N){
	string out;
	while(N){
		out.push_back(char('0'+N%10));
		N/=10;
	}
	reverse(out.begin(),out.end());
	return out;
}

int main(){

	srand(284);

	for(int i=4;i<=5;i++){
		ofstream input, output;
		string name = "../cases/case";
		name+=stringify(i);
		input.open(name+".in");
		output.open(name+".out");

		//case 1
		// int64_t N = 100, M = ((rand()%10000000000000)*10000+20000000000000)*10;

		//case 2
		// int64_t N = 10000, M = ((rand()%10000000000000)*10000+20000000000000)*100;
		
		// case 3
		// int64_t N = 100000, M = ((rand()%10000000000000)*10000+20000000000000)/1000000;
		
		// test case
		int64_t N = 100000, M = ((rand()%10000000000000)*10000+20000000000000)*100;


		vector<int64_t>k(N);
		for(int i=0;i<N;i++)
			k[i]=((rand()%10000000000000)*10000+20000000000000);

		input << M << ' ' << N << '\n';
		for(int i=0;i<N;i++)
			input << k[i] << ' ';
		output << solve(M, N, k);

		input.close();
		output.close();

	}

}