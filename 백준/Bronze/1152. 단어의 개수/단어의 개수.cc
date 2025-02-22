#include <iostream>
#include <string> //string, length(), getline()
#include <cctype> //isspace()
using namespace std;

int main(void)
{
	string str;
	int cnt = 0;

	getline(cin, str); //공백 포함 문자열 입력

	for (int i = 0; i < str.length(); i++)
	{
		if (isspace(str[i]) == 0 && isspace(str[i+1]) != 0) //isspace(): 공백이라면 0이 아닌 수 반환. 공백이 아닌 다른 문자라면 0 반환
			cnt++;
		if (isspace(str[i]) == 0 && i == str.length() - 1)
			cnt++;
	}

	cout << cnt<<endl;
	return 0;
}