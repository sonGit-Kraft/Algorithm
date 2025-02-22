#include <iostream>
using namespace std;

int main(void)
{
	int N[9], MAX, index;
	
	for (int i = 0; i < 9; i++)
		cin >> N[i];
		
	MAX = N[0];
	index = 0;
	for (int i = 0; i < 9; i++)
	{
		if (N[i] > MAX)
		{
			MAX = N[i];
			index = i;
		}
				
	}
	
	cout << MAX << "\n" << index + 1 << endl;
	return 0;
}