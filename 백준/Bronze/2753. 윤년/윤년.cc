#include <iostream>
using namespace std;

int main(void)
{
	int n = 0;

	cin >> n;

	if (n % 4==0 && (n % 100 != 0 || n % 400 == 0))
		cout << 1 << '\n';
	else
		cout << 0 << '\n';
	
	return 0;
}