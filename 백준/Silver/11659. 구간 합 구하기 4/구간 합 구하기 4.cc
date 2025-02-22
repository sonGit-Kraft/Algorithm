#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m; cin >> n >> m;

	int input; 
	int* sum = new int[n + 1] {0};

	// 합 배열 계산
	for (int i = 1; i <= n; i++)
	{
		cin >> input;
		sum[i] = sum[i-1] + input; 
	}

	int start, end;
	
	// 구간 합 계산
	for (int i = 0; i < m; i++)
	{
		cin >> start >> end;
		cout << sum[end] - sum[start - 1] << '\n';
	}
	
	delete[] sum;

	return 0;
}