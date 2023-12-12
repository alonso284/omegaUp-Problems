#include <vector>
#include <iostream>
#include <set>
#include <queue>


using namespace std;
typedef pair<int64_t, int> path;

#define endl '\n'
int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<path>* g = new vector<path>[1000010];

	for (int i = 0; i < m; i++) {
		int64_t c;
		int     a, b;
		cin >> a >> b >> c;
		g[a].push_back({c, b});
		g[b].push_back({c, a});
	}

	set<int>                                       v;
	priority_queue<int, vector<int>, greater<int>> q;

	vector<int64_t> res(1000010, INT64_MAX);
	res[1] = 0;

	q.push(1);
	while (q.size()) {
		auto curr = q.top();
		q.pop();
		v.insert(curr);
		cout << "ESTAMOS EN " << curr << endl;
		for (path& n : g[curr]) {
			if (v.count(n.second)) continue;
			if (max(res[curr], n.first) < res[n.second])
				res[n.second] = max(res[curr], n.first);

			q.push(n.second);
		}
	}

	cout << res[n];
	return 0;
}
