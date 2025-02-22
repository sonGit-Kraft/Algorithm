#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string N; cin >> N; // 숫자를 문자열로 입력
	
	// 입력받은 문자열을 정수형 배열에 저장
	vector<int> arr(N.size(), 0);
	for (int i = 0; i < N.size(); i++)
		arr[i] = stoi(N.substr(i, 1));
	
	// 내림차순 정렬 (선택정렬)
	for (int i = 0; i < N.size(); i++)
	{
		for (int j = i + 1; j < N.size(); j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	// 내림차순으로 정련된 수 출력
	for (int i = 0; i < N.size(); i++)
		cout << arr[i];
	
	return 0;
}