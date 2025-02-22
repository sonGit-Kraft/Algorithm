#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 카드의 개수 입력
	int N; cin >> N;

	queue<int> myqueue; // queue
	for (int i = 1; i <= N; i++)
		myqueue.push(i);

	while (myqueue.size() > 1)
	{
		myqueue.pop();
		myqueue.push(myqueue.front());
		myqueue.pop();
	}

	cout << myqueue.front() << '\n';
	return 0;
}