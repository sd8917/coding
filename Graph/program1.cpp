#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
using namespace std;


class Graph {
	list<int> *l;
	int V;

public:
	Graph(int v) {
		V = v;
		l = new list<int>[V];
	}

	void addEdge(int i, int j, bool undir = true)
	{
		l[i].push_back(j);
		if (undir)
		{
			l[j].push_back(i);
		}
	}

	void printAdjList() {
		//iterate over all the rows;
		for (int i = 0; i < V; i++)
		{
			cout << i << "-->";

			for (auto node : l[i]) {
				cout << node << " ";
			}
			cout << endl;
		}
	}
};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Graph g(6);
	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 1);
	g.addEdge(3, 4);
	g.addEdge(4, 5);
	g.addEdge(2, 3);
	g.addEdge(3, 5);

	g.printAdjList();



#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

	return 0;

}

