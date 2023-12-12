#include <iostream>
#include <vector>
#include <unordered_set>

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

int64_t binary_search(int64_t start, int64_t end, const vector< vector < pair < int, int64_t > > > &vec){
	if(start >= end) return start;

	int64_t mid = (start + end)/2;

	if(valid_path(mid, vec))
		return binary_search(start, mid, vec);
	return binary_search(mid+1, end, vec);
}

int main(){

	vector< vector < pair< int, int64_t > > > paths;

	int N, M; cin >> N >> M;
	paths.resize(N+1);

	HOME = N;

	int64_t MAX = 0;

	while(M--){
		int64_t A, B, C; cin >> A >> B >> C;
		paths[A].push_back({B, C});
		paths[B].push_back({A, C});
		if(C > MAX) MAX = C;
	}

	cout << binary_search(1, MAX, paths);

	return 0;

}
