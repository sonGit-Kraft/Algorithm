#include <iostream>
using namespace std;

int main(void)
{
	string a, b, c;

	cin >> a >> b >> c;

	cout << stoi(a) + stoi(b) - stoi(c) << endl;
	cout << stoi(a + b) - stoi(c) << endl;

	return 0;
}