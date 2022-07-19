#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
using namespace std;

void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs)
{
	storeDfs.push_back(node);
	vis[node] = 1;

	for (auto it : adj[node]) {
		if (!vis[it]) {
			dfs(it, vis, adj, storeDfs);
		}
	}
}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
	vector<int>storeDfs;
	vector<int>vis(V + 1, 0);

	for (int i = 1; i <= V; i++) {
		if (!vis[i])
		{
			dfs(i, vis, adj, storeDfs);
		}
	}

	return storeDfs;
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

	vector<int> ans = dfsOfGraph(n, adj);


	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}



#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

	return 0;

}

