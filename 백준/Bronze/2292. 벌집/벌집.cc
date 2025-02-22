#include <iostream>
using namespace std;

int main(void)
{
	int input;
	int end = 2;
	int n = 1;

	cin >> input;

	while (1)
	{
		if (input < end)
		{
			cout << n << endl;
			break;
		}
		end += 6 * n;
		n++;
	}

	return 0;
}