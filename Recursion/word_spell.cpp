#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
using namespace std;

int a[10001];
int n;
int ans;
void solve() {

	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << "test";
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int i, j, test;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	solve();


#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

	return 0;

}

