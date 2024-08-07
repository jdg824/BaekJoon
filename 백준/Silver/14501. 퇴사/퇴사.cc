#include <iostream>

using namespace std;

int dp[16];
int cost[16];
int day[16];

int main(void) {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> day[i] >> cost[i];
	}

	for (int i = n; i > 0; i--) {
		if (i + day[i] > n + 1)
			dp[i] = dp[i + 1];
		else
			dp[i] = max(dp[i + 1], cost[i] + dp[i + day[i]]);
	};

	cout << dp[1];
	return 0;
}