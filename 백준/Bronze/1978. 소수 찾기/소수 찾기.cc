#include <iostream>
using namespace std;

int main(void)
{
	int n, cnt, decsum = 0;

	cin >> n;
	int* num = new int[n];
	for (int i = 0; i < n; i++)
		cin >> num[i];

	for (int i = 0; i < n; i++)
	{
		cnt = 0;
		for (int j = 1; j <= num[i]; j++)
		{
			if (num[i] % j == 0)
				cnt++;
		}
		if (cnt == 2)
			decsum++;
	}
		
	cout << decsum;

	delete[]num;
	return 0;
}