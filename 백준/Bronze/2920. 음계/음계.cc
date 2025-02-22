#include <iostream>

using namespace std;

int main(void)
{
	string str, ptr;

	for (int i = 0; i < 8; i++)
	{
		cin >> str;
		ptr += str;
	}
		
	if (ptr == "12345678")
		cout << "ascending" << endl;
	else if (ptr == "87654321")
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;

	return 0;
}