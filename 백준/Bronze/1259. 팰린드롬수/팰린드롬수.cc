#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	string input;
	bool isPalindrome;
	while (1)
	{
		cin >> input;

		if (input == "0")
			break;

		isPalindrome = true;

		for (int i = 0; i < input.length() / 2; i++)
		{
			if (input[i] != input[input.length() - i - 1])
			{
				isPalindrome = false;
				break;
			}
		}

		if(isPalindrome)
			cout << "yes\n";
		else
			cout << "no\n";
	}
		
	return 0;
}