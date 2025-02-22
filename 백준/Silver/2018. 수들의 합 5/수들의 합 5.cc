#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; cin >> N;
	int start = 1, end = 1;
	int sum = 1, cnt = 1;

	while (end != N)
	{
		if (sum > N) // 합이 n보다 크면
		{
			sum -= start;
			start++; // 시작값 증가
		}
		else if (sum == N) // 합이 n과 같다면
		{
			cnt++; // 조건을 만족하는 경우의 수 증가
			end++; // 끝값 증가
			sum += end;
		}
		else if (sum < N) // 합이 n보다 작으면
		{
			end++; // 끝값 증가
			sum += end;
		}
	}
	
	cout << cnt;

	return 0;
}