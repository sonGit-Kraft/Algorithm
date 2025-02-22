#include <iostream>
#include <stack>
#include <string> 
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string temp;
    
    while (true) 
    {
        getline(cin, temp); 
        
        if (temp == ".") // 종료 조건
            break;

        stack<char> mystack;
        bool isBalanced = true; // 균형 여부 판별

        for (char ch : temp) 
        {
            if (ch == '(' || ch == '[') 
            {
                mystack.push(ch);
            }
            else if (ch == ')') 
            {
                if (mystack.empty() || mystack.top() != '(') 
                {
                    isBalanced = false;
                    break; 
                }
                mystack.pop();
            }
            else if (ch == ']') 
            {
                if (mystack.empty() || mystack.top() != '[') 
                {
                    isBalanced = false;
                    break; 
                }
                mystack.pop();
            }
        }

        // 스택이 비어 있어야 균형 잡힌 괄호
        if (isBalanced && mystack.empty()) 
            cout << "yes\n";
        else 
            cout << "no\n";
    }
}
