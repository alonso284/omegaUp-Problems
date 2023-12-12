#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

int main(){

	vector < vector < pair < int64_t, int > > > aristas;

	int N, M;
	cin >> N >> M;

	aristas.resize(N+1);

	while(M--){
		int A, B;
		int64_t C;

		cin >> A >> B >> C;

		aristas[A].push_back({C, B});
		aristas[B].push_back({C, A});
	}

	unordered_set<int> visited;
	priority_queue<pair<int64_t, int>, vector<pair<int64_t, int>>, greater<pair<int64_t, int>>> pq;

	int64_t MAX = 1e18 + 18;

	for(auto& child: aristas[1]){
		if(child.first < MAX) MAX = child.first;
		pq.push(child);
	}
	visited.insert(1);

	while(pq.top().second != N){
		auto next = pq.top();
		pq.pop();

		if(next.first > MAX) MAX = next.first;

		for(auto& child: aristas[next.second])
			if(!visited.count(child.second)) pq.push(child);
		visited.insert(next.second);
	}

	if(pq.top().first > MAX) MAX = pq.top().first;

	cout << MAX << endl;

	return 0;
}
