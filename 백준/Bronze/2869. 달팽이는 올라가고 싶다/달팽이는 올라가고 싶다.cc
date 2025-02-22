#include <iostream>
using namespace std;

int main(void)
{
	int a, b, v;
	int n;

	cin >> a >> b >> v;

	n = (v - b) / (a - b);

	if ((v - b) % (a - b) !=0)
		n = n + 1;

	cout << n;

	return 0;
}