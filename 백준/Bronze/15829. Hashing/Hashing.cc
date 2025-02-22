#include <iostream>
using namespace std;

int main(void)
{
	int l;
	string str;
	unsigned long long sum = 0, r = 1, m = 1234567891;

	cin >> l >> str;

	for (int i = 0; i < l; i++)
	{
		sum = (sum + (int(str[i]) - 'a' + 1) * r) % m; //실시간으로 mod 처리하여 오버플로우 방지
		r = (r * 31) % m; //항의 번호에 맞게 누적하여 거듭 제곱
	}

	cout << sum;

	return 0;
}