#include <iostream>
#include <string>

using namespace std;
int main(void)
{
	int a, b, c, n;
	int arr[10] = { 0, }; //숫자 count 배열 0으로 초기화

	cin >> a >> b >> c; n = a * b * c;
	string N(to_string(n)); //문자열로 변환

	for (int i = 0; i < N.length(); i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (N[i] == '0' + j)
				arr[j]++;
		}
	}
    
	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;

	return 0;
}