#include <iostream>

using namespace std;

int main(void)
{
	int mod[42]; //0~41
	int arr[10];
	int cnt=0;

	for (int i = 0; i < 42; i++)
		mod[i] = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		mod[arr[i] %= 42]++;
	}

	for (int i = 0; i < 42; i++)
		if (mod[i] != 0)
			cnt++;
	
	cout << cnt<<"\n";
	return 0;
}