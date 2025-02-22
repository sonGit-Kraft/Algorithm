#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K;  cin >> K;
	stack<int> myStack;

	int temp; int count = 0;
	for (int i = 0; i < K; i++)
	{
		cin >> temp; // 정수 입력
		if (temp != 0) // 정수가 0이 아닌 경우
			myStack.push(temp); // 스택에 정수 저장
		else // 정수가 0인 경우
			myStack.pop(); // 스택의 최근 값 삭제
	}

	int Stacksize = myStack.size(); // stack의 데이터 개수 저장
	int total = 0; // 모든 수의 합을 저장하는 변수
	// 스택에 저장된 모든 수를 저장
	for (int i = 0; i < Stacksize; i++)
	{
		total += myStack.top();
		myStack.pop();
	}

	cout << total << '\n';
	return 0;
}