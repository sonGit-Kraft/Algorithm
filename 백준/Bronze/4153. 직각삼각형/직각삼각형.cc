#include <iostream>
using namespace std;

int main(void)
{
	int num1, num2, num3;

	while (1)
	{
		cin >> num1 >> num2 >> num3;

		if (num1 == 0 && num2 == 0 && num3 == 0) //0 0 0 이 입력되면 루프 종료
			break;

		num1 = num1 * num1; num2 = num2 * num2; num3 = num3 * num3; //각 변 제곱하여 저장

		//직사각형 판별
		if (num1 == num2 + num3 || num2 == num1 + num3 || num3 == num1 + num2) 
			cout << "right\n";
		else
			cout << "wrong\n";

	}

	return 0;
}