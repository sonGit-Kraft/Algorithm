#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 명령어 개수 입력
	int N; cin >> N;

	stack<int> myStack; // stack
	string command; // 입력받을 명령어
	int X; // push X
	for (int i = 0; i < N; i++)
	{
		cin >> command;
		if (command == "push")
		{
			cin >> X;
			myStack.push(X);
		}
		else if (command == "pop")
		{
			if (!myStack.empty())
			{
				cout << myStack.top() << '\n';
				myStack.pop();
			}
			else
				cout << "-1\n";
		}
		else if (command == "size")
			cout << myStack.size() << '\n';
		else if (command == "empty")
			cout << myStack.empty() << '\n';
		else if (command == "top")
		{
			if (!myStack.empty())
				cout << myStack.top() << '\n';
			else
				cout << "-1\n";
		}
	}

	return 0;
}