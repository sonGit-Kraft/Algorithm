#include <iostream>
using namespace std;

int GCD(int a, int b) //최대공약수 구하기 (재귀 함수 형태)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

int main(void)
{
	int num1, num2, gcd;
	int temp;
	cin >> num1 >> num2;

	gcd = GCD(num1, num2); //(큰 수, 작은 수)

	//최대공약수 출력
	cout << gcd << '\n';
	//최소 공배수 출력
	cout << num1 * num2 / gcd; //(num1 / gcd) * (num2 / gcd) * gcd;

	return 0;
}