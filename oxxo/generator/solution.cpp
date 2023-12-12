#include<iostream>
#include<cmath>

using namespace std;

double distancia(double x1, double y1, double x2, double y2){
	return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

int main(){

	double x, y;
	cin >> x >> y;

	int N; cin >> N;
	
	double dis = 100000;

	for(int i = 1; i <= N; i++){
		double xi, yi; cin >> xi >> yi;
		double d = distancia(x, y, xi, yi);
		dis = min(dis, d);
	}

	cout << round(dis);

	return 0;
}
