#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m; cin >> n >> m;

	vector<vector<int>>arr(n + 1, vector<int>(n + 1, 0));
	vector<vector<int>>prefixsum(n + 1, vector<int>(n + 1, 0));

	// 구간 합 배열 생성
	for (int x = 1; x <= n; x++)
	{
		for (int y = 1; y <= n; y++)
		{
			cin >> arr[x][y];
			prefixsum[x][y] = prefixsum[x][y - 1] + prefixsum[x - 1][y] - prefixsum[x - 1][y - 1] + arr[x][y];
		}
	}
	
    // 질의 처리
	int x1, y1, x2, y2;
	for (int i = 0; i < m; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cout << prefixsum[x2][y2] - prefixsum[x1 - 1][y2] - prefixsum[x2][y1 - 1] + prefixsum[x1 - 1][y1 - 1] << '\n';
	}

	return 0;
}