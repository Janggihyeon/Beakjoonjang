#include <iostream>

using namespace std;

int dp[1000000];

int main() {
	int num;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	cin >> num;

	for (int i = 4; i <= num; i++)
	{
		int m = dp[i - 1] + 1;
		if (i % 3 == 0)m = min(m, dp[i/3] + 1);
		if (i % 2 == 0)m = min(m, dp[i / 2] + 1);
		dp[i] = m;
	}

	cout << dp[num] << endl;
	return 0;
}
