#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 숫자의 개수 입력
	int N; cin >> N;

	// 숫자 입력
	vector<int> arr(N, 0);
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	// 버블 정렬
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	// 정렬된 배열 출력
	for (int i = 0; i < N; i++)
		cout << arr[i] << '\n';
	
	return 0;
}