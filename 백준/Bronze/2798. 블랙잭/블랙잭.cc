#include <iostream>
using namespace std;

int main(void)
{
	int n, m;
	int sum, result = 0;

	cin >> n >> m;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) 
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			for (int z = j + 1; z < n; z++)
			{
				sum = arr[i] + arr[j] + arr[z];
				if (sum <= m && result < sum)
					result = sum;
			}
		}
	}

	cout << result;

	return 0;
}