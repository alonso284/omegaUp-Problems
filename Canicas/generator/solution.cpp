#include <iostream>
#include <vector>

using namespace std;

vector<int> primos;
bool criba[10004];

int main(){

	int A, B;
	cin >> A >> B;

	for(int64_t i=2;i < 10004; i++){
		if(!criba[i]){
			if(A <= i && i <= B)
			primos.push_back(i);

			for(int64_t j = i * i ; j < 10004; j+=i){
				criba[j] = true;
			}
		}
	}

	int Q; cin >> Q;

	while(Q--){
		int64_t res = 1;
		int64_t mult, n, m;
		cin >> n;
		mult = n;
		m = primos.size();

		for(int64_t i = m; i >= m-n; i--){
			res *= i;
			if(mult > 1 && res%mult==0) res/=mult--; 
		}
		cout << res << endl;

	}
	

	return 0;
}