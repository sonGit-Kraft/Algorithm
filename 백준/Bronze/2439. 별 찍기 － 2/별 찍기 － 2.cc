#include <iostream>
using namespace std;


int main(void)
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n-1; j++)
		{
			cout << " ";
		}
		for (int j = n-i-1; j < n; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}