#include <iostream>

using namespace std;
int main(void)
{
	int t, A, B;
	
	cin >> t;
	int* arr = new int[t];

	for (int i = 0; i < t; i++)
	{
		cin >> A >> B;
		arr[i] = A + B;
	}
	for (int i = 0; i < t; i++)
		cout << arr[i] << endl;

	delete[] arr;
	return 0;
}