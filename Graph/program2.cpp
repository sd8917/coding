#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
using namespace std;


class Node {
public:
	string name;
	list<string> nbrs;

	Node(string name) {
		this->name = name;
	}
};

class Graph {
	//All nodes;
	//HashMap (STRING, NODE*)

	unordered_map<string, Node* > m;
public:
	Graph(vector<string> cities)
	{
		for (auto city : cities)
		{
			m[city] = new Node(city);
		}
	}

	void addEdge(string x, string y, bool undir = false)
	{
		m[x]->nbrs.push_back(y);

		if (undir)
		{
			m[y]->nbrs.push_back(x);
		}

	}

	void printAdjList()
	{
		for (auto cityPair : m) {
			auto city = cityPair.first;

			Node *node = cityPair.second;

			cout << city << " - ";
			for (auto nbr : node->nbrs)
			{
				cout << nbr << ", ";
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

	vector<string > cities = {"Delhi", "London", "Paris", "New York"};

	Graph g(cities);

	g.addEdge("Delhi", "London");
	g.addEdge("New York", "London");
	g.addEdge("Delhi", "Paris");
	g.addEdge("Paris", "New York");

	g.printAdjList();



#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

	return 0;

}

