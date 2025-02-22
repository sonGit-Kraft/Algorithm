#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; cin >> N;
	int M; cin >> M;

	vector<vector<char>> board(N, vector <char>(M,0));

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> board[i][j];

	char case1 = 'W', case2 = 'B';
	int count = 0;
	int min = N * M;

	for (int i = 7; i < N; i++)
	{
		for (int j = 7; j < M; j++)
		{
			for (int x = i - 7; x <= i; x++)
			{
				for (int y = j - 7; y <= j; y++)
				{
					if (board[x][y] != case1)
						count++;
					
					// W <-> B
					char temp = case1;
					case1 = case2;
					case2 = temp;

				}
				// 개행시 W <-> B
				char temp = case1;
				case1 = case2;
				case2 = temp;
			}

			if (count > 64 - count)
				count = 64 - count;

			if (min > count)
				min = count;

			count = 0;
		}
	}

	cout << min << '\n';

	return 0;
}