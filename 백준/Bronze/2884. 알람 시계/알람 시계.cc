#include <iostream>
using namespace std;

int main(void)
{
	int H, M, TotM;
	
	cin >> H >> M;

	TotM = H * 60 + M - 45;
	if (TotM < 0)
		TotM += 24 * 60;

	H = TotM / 60;
	M = TotM % 60;

	cout << H << " " << M;

	return 0;
}