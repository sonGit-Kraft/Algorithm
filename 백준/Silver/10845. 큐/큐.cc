#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 명령어 개수 입력
	int N; cin >> N;

	queue<int> myQueue; // queue 객체 생성
	string command; // 입력받을 명령어
	int X; // 큐에 넣을 정수 (push)

	for (int i = 0; i < N; i++) // 명령어 개수 N만큼 반복
	{
		cin >> command; // 명령어 입력

		if (command == "push") // push
		{
			cin >> X; // 스택에 넣을 정수 입력
			myQueue.push(X); // 스택에 정수 X를 넣음
		}
		else if (command == "pop") // pop
		{
			if (!myQueue.empty()) // 큐가 비어있지 않다면
			{
				cout << myQueue.front() << '\n'; // 큐에서 가장 앞에 있는 정수를 출력
				myQueue.pop(); // 스택에서 가장 위에 있는 정수를 뺌
			}
			else // 큐에 들어있는 정수가 없는 경우
				cout << "-1\n";
		}
		else if (command == "size") // size
			cout << myQueue.size() << '\n'; // 큐에 들어있는 정수의 개수를 출력
		else if (command == "empty") // empty
			cout << myQueue.empty() << '\n'; // 큐가 비어있으면 1, 아니면 0을 출력
		else if (command == "front") // front
		{
			if (!myQueue.empty()) // 큐가 비어있지 않다면
				cout << myQueue.front() << '\n'; // 큐의 가장 위에 있는 정수를 출력
			else // 큐에 들어있는 정수가 없는 경우
				cout << "-1\n";
		}
		else if (command == "back") // back
		{
			if (!myQueue.empty()) // 큐가 비어있지 않다면
				cout << myQueue.back() << '\n'; // 큐의 가장 뒤에 있는 정수를 출력
			else // 큐에 들어있는 정수가 없는 경우
				cout << "-1\n";
		}
	}

	return 0;
}