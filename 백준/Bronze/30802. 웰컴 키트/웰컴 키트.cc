#include <iostream>
using namespace std;

int main(void)
{
	int n, t, p, size[6];
	int tsum = 0;
	int tQ, tR, pQ, pR;

	//입력
	cin >> n;
	for (int i = 0; i < 6; i++)
		cin >> size[i];
	cin >> t >> p;

	for (int i = 0; i < 6; i++)
	{
		tQ = size[i] / t; 
		tR = size[i] % t; 
		if (tR == 0)
			tsum += tQ;
		else
			tsum += tQ + 1;
	}
	
	pQ = n / p;
	pR = n % p;

	cout << tsum << endl;
	cout << pQ << ' ' << pR << endl;

	return 0;
}