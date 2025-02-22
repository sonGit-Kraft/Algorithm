#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t;
	int cnt;
	string str[100];
	int sc[100];

	cin >> t;
	for (int i = 0; i < t; i++)
		cin >> str[i];

	for (int i = 0; i < t; i++)
	{
		cnt = 0;
		sc[i] = 0;
		for (int j = 0; j < str[i].length(); j++)
		{
			if (str[i][j] == 'O')
			{
				cnt++;
				sc[i] += cnt;
			}
			else if (str[i][j] == 'X')
				cnt = 0;
		}
	}
	
	for (int i = 0; i < t; i++)
		cout<< sc[i]<<endl;

	return 0;
}