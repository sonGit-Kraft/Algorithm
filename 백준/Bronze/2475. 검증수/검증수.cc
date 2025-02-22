#include <iostream>
using namespace std;

int main(void)
{
	int n=0, ver=0;

	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		ver += n * n;
	}
		
	cout << ver%10 << endl;
	
	return 0;
}