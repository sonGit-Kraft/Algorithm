#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n; cin >> n; 
	int count[10001] = { 0, }; // 카운터 배열 0으로 초기화 (범위: 10,000보다 작거나 같은 자연수)
	int input;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		count[input]++;
	}

	for (int i = 0; i <= 10000; i++)
	{
		if (count[i] != 0)
		{
			for (int j = 0; j < count[i]; j++)
				cout << i << '\n';
		}
	}

	return 0;
}