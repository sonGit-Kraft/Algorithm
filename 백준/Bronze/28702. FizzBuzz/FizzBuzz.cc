#include <iostream>
#include <string> // for std::stoi()
#include <cctype> //std::isdigit
using namespace std;

void PrintFizzBuzz(int obj)
{
	if (obj % 3 == 0 && obj % 5 == 0)
		cout << "FizzBuzz";
	else if (obj % 3 == 0)
		cout << "Fizz";
	else if (obj % 5 == 0)
		cout << "Buzz";
	else
		cout << obj;
}
int main(void)
{
	string str[3];

	for (int i = 0; i < 3; i++)
		cin >> str[i];
	
	// 숫자인지 판단
	bool isint[3];
	for (int i = 0; i < 3; i++)
	{
		isint[i] = true;
		for (char ch : str[i])
		{
			if (!isdigit(ch)) 
			{
				isint[i] = false;
				break;
			}
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		if (isint[i])
		{
			PrintFizzBuzz(stoi(str[i]) + (3 - i));
			break;
		}
	}
		
	return 0;
}