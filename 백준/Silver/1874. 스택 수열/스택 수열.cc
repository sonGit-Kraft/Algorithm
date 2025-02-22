#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 수열의 개수 입력
	int n; cin >> n;

	//수열 입력
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	stack<int> myStack; 
	string result;
	int next_num = 1;
	for (int i = 0; i < n; i++)
	{
		while (arr[i] >= next_num)
		{
			myStack.push(next_num); // push
			next_num++; // push할 값(오름차순)
			result += "+\n";
		}
		
		if (arr[i] == myStack.top()) // 배열의 현재값과 스택의 top이 일치하다면
		{
			myStack.pop(); // pop
			result += "-\n"; 
		}
		else
		{
			cout << "NO" << '\n'; 
			return 0; // 프로그램 종료
		}
	}

	cout << result << endl;
	return 0;
}