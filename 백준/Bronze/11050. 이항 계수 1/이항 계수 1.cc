#include <iostream>
using namespace std;

int main(void)
{
	int n, k;
	int result = 1;

	cin >> n >> k;

	for (int i = n - k + 1; i <= n; i++)
		result *= i;

	for (int i = 1; i <= k; i++)
		result /= i;

	cout << result;

	return 0;
}