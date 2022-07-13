#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
using namespace std;

int power(int a, int n)
{
	//base case
	if (n == 0)
	{
		return 1;
	}
	return a * power(a, n - 1);
}

int fastPower(int a, int n)
{
	//base case
	if (n == 0)
	{
		return 1;
	}

	int subProb = fastPower(a, n / 2);
	int subProbSq = subProb * subProb;

	if (n & 1)
	{
		return a * subProbSq;
	}
	return subProbSq;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, n;
	cin >> a >> n;

	cout << fastPower(a, n) << endl;;


#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

	return 0;

}

