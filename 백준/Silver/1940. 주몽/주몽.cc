#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M; cin >> N >> M;
    
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N); // 배열을 오름차순으로 정렬

	int start = 0, end = N - 1, cnt = 0;
	int temp; // 두 수의 합을 저장할 변수

	while (start < end)
	{
		temp = arr[start] + arr[end];
		if (temp == M) // 두 수의 합이 M과 같을 때
		{
			cnt++; // 쌍 개수 증가
			start++; // 시작 인덱스 증가
			end--; // 끝 인덱스 감소
		}
		else if (temp > M) // 두 수의 합이 M보다 클 때
			end--; // 끝 인덱스를 왼쪽으로 이동
		else // 두 수의 합이 M보다 작을 때
			start++; // 시작 인덱스를 오른쪽으로 이동
	}

	cout << cnt << '\n'; // 조건에 맞는 쌍의 개수 출력

	delete[] arr; // 동적 배열 메모리 해제
	return 0;
}