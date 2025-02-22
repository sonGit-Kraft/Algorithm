#include <iostream>
using namespace std;

int main(void)
{
	int max, min, N;
	
	cin >> N;
	int* arr = new int[N];

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	max = min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (max < arr[i])
			max = arr[i];

		if (min > arr[i])
			min = arr[i];
	}

	cout << min << " " << max;

	delete[]arr;

	return 0;
}