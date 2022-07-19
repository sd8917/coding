#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
	vector<int > bfs;
	vector<int> visited(V + 1, 0);

	for (int i = 1; i <= V; i++) {
		if (!visited[i]) {
			queue<int> q;
			q.push(i);
			visited[i] = 1;


			while (!q.empty()) {
				int node = q.front();
				q.pop();
				bfs.push_back(node);

				for (auto it : adj[node]) {
					if (!visited[it]) {
						q.push(it);
						visited[it] = 1;
					}
				}
			}
		}
	}

	return bfs;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;

	vector<int> adj[n + 1];

	for (int i = 0; i < m; i++)
	{
		/* code */
		int u, v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	//print

	// for (int i = 0; i < n + 1; i++)
	// {
	// 	cout << i << " ";

	// 	for (int j = 0; j < adj[i].size(); j++)
	// 	{
	// 		cout << adj[i][j] << " ";
	// 	}

	// 	cout << endl;
	// }

	vector<int> ans = bfsOfGraph(n, adj);


	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}



#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

	return 0;

}

