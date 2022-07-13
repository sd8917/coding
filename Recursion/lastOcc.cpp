#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
using namespace std;

int lastOcc(int arr[], int n, int key)
{
	//base case;
	if (n == 0)
	{
		return -1;
	}

	//rec case
	int subIndex = lastOcc(arr + 1, n - 1, key);

	if (subIndex == -1)
	{
		if (arr[0] == key)
		{
			return 0;
		}
		else {
			return -1;
		}

	}
	else {
		return subIndex + 1;
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 3, 5, 7, 6, 2, 7, 11, 21};
	int n = sizeof(arr) / sizeof(int);

	int key = 7;
	cout << lastOcc(arr, n, key);


#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif

	return 0;

}

