#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	int arr[26];

	cin >> s;
	for (int i = 0; i < 26; i++) //-1로 초기화
		arr[i] = -1;
	for (int i = 0; i < s.length(); i++)  
	{
		//해당 알파벳을 처음 등장할 때를 구분 
		if (arr[int(s[i]) - 97] == -1) 
			arr[int(s[i]) - 97] = i;
	}
	
	for (int i = 0; i < 26; i++)
		cout << arr[i] << ' ';
	return 0;
}