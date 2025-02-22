#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int t, r[1000];
	string s[1000];

	cin >> t;

	for (int i = 0; i < t; i++)
		cin >> r[i] >> s[i];

	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < s[i].length(); j++)
		{
			for (int m = 0; m < r[i]; m++)
				cout << s[i][j];
		}
		cout << endl;
	}

	return 0;
}