#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int HOME;

void DFS(int node, int64_t max_cost, unordered_set<int> &visited, const vector < vector < pair < int, int64_t > > > &map){
	visited.insert(node);
	for(const pair<int, int64_t> &island: map[node])
		if(!visited.count(island.first) && island.second <= max_cost)
			DFS(island.first, max_cost, visited, map);
}

bool valid_path(int64_t max_cost, const vector < vector < pair < int, int64_t > > > &vec){
	unordered_set<int> visited;
	DFS(1, max_cost, visited, vec);
	return visited.count(HOME);
}

int64_t binary_search(int start, int end, const vector< vector < pair < int, int64_t > > > &vec, const vector <int64_t> &costs){
	if(start >= end) return costs[start];

	int64_t mid = (start + end)/2;

	if(valid_path(costs[mid], vec))
		return binary_search(start, mid, vec, costs);
	return binary_search(mid+1, end, vec, costs);
}

int main(){

	vector< vector < pair< int, int64_t > > > paths;
	vector <int64_t> costs;
	unordered_set<int64_t> probados;

	int N, M; cin >> N >> M;
	paths.resize(N+1);

	HOME = N;

	for(int i = 0; i < M; i++){
		int A, B; cin >> A >> B;
		int64_t C; cin >> C;
		paths[A].push_back({B, C});
		paths[B].push_back({A, C});
		if(!probados.count(C)) costs.push_back(C);
		probados.insert(C);
	}

	sort(costs.begin(), costs.end());

	cout << binary_search(0, costs.size()-1, paths, costs);

	return 0;

}
