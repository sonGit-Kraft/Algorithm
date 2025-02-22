#include <iostream>

using namespace std;
int main(void)
{
	char word_s[1001];
	int i;

	cin >> word_s >> i;
	
	cout << word_s[i-1];
	return 0;
}