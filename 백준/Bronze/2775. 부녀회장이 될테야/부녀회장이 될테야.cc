#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;

	int* k = new int[t]; int* n = new int[t]; // 테스트 케이스 개수 t 크기의 동적 배열 생성
	
	for (int i = 0; i < t; i++) // 각 테스트 케이스의 층(k)과 호(n) 입력
		cin >> k[i] >> n[i];

	for (int i = 0; i < t; i++)
	{
		int* arr = new int[n[i]]; // 호실의 인원을 저장하는 배열
		for (int j = 0; j < n[i]; j++) // 0층으로 초기화 (1 2 3 4 5 ...)
			arr[j] = j + 1;

		for (int j = 0; j < k[i]; j++) // 층 만큼 반복
		{
			for (int z = 1; z < n[i]; z++) // 호 만큼 반복
				arr[z] = arr[z] + arr[z - 1];
		}
		
		cout << arr[n[i] - 1] << endl;
	}

	return 0;
}