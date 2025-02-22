#include <iostream>
using namespace std;

int main(void)
{
	int input, ctor, sum;
	int i = 1;

	cin >> input; // 입력값 입력

	while (i < input)
	{
		ctor = i; // 현재 후보 생성자 초기화
		sum = i; // 현재 후보 생성자 값을 합에 포함

		// 생성자의 각 자리의 수의 합을 게산
		while (ctor != 0)
		{
			sum += ctor % 10; // 10으로 나눈 나머지를 더함 (각 자리 숫자)
			ctor /= 10; // 10으로 나눠 다음 자리로 이동
		}
        
        // 입력값이 생성자 + 생성자의 각자리 숫자의 합과 같다면
		if (input == sum)
		{
			// 현재 값이 생성자
			ctor = i;
			break;
		}

		i++; // 다음 후보로 진행
	}
	cout << ctor << endl; // 생성자 출력 (없으면 0으로 출력)

	return 0;
}