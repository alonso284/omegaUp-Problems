#include <iostream>
#include <cstdlib>
#include <time.h>

int main(){
	srand (time(NULL));
	int limit, floors;
	std::cin >> floors >> limit;

	std::cout << 1 << ' ' << floors << std::endl;
	/* for(int j = 1; j <= floors; j++){ */
	for(int i = 1; i <= floors; i++)
		std::cout << (int)(rand() % limit*0.2 + limit*0.8) << ' ';
	/* std::cout << std::endl; */
	/* } */
	
	return 0;
}
