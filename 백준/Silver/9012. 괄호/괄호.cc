#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        string temp; cin >> temp;
        stack<char> mystack;
        
        for (int j = 0; j < temp.length(); j++)
        {
            if (temp[j] == '(') // '('일 때
                mystack.push(temp[j]); // 스택에 '(' 저장
            else if (temp[j] == ')') // ')'일 때
            {
                if (!mystack.empty() && mystack.top() == '(') // 스택의 최상단 값이 '(' 이면
                    mystack.pop(); // 스택의 최상단 값 '(' 제거
                else // 스택의 최상단 값이 ')' 이거나 스택이 비어있다면
                    mystack.push(temp[j]); // ')' 스택에 저장
            }
        }
        
        if (mystack.empty()) // 스택이 비어 있으면 올바른 괄호 문자열
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}