/**
* Author: Jorge Raul Tzab Lopez
* Github: https://github.com/SJMA11723
*/
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    long long arr[m], suma1 = 0, suma2 = 0;
    for(int i = 0; i < m; ++i){
        cin >> arr[i];
        suma2 += arr[i];
    }

    long long ans = LLONG_MAX;
    for(int k = 0; k < m; ++k){
        suma2 -= arr[k];
        ans = min(ans, max(suma1, suma2));
        suma1 += arr[k];
    }
    cout << ans;
	return 0;
}
