#include <iostream>
using namespace std;

int count_A = 0, count_C = 0, count_G = 0, count_T = 0;
int count_ACGT[4] = { 0, };

void Add(char c)
{
	switch (c)
	{
	case 'A':
		count_A++;
		break;
	case 'C':
		count_C++;
		break;
	case 'G':
		count_G++;
		break;
	case 'T':
		count_T++;
		break;
	}
}

void Delete(char c)
{
	switch (c)
	{
	case 'A':
		count_A--;
		break;
	case 'C':
		count_C--;
		break;
	case 'G':
		count_G--;
		break;
	case 'T':
		count_T--;
		break;
	}
}

bool isDNAPart()
{
	return count_A >= count_ACGT[0] && count_C >= count_ACGT[1] && count_G >= count_ACGT[2] && count_T >= count_ACGT[3];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int S, P; cin >> S >> P;
	string str; cin >> str; // DNA 문자열 입력
	
	for (int i = 0; i < 4; i++) // A, C, G, T의 최소 개수 입력
		cin >> count_ACGT[i];

	for (int i = 0; i < P; i++)
		Add(str[i]);
	
	int cnt = 0;

	if (isDNAPart())
		cnt++; 

	for (int i = P; i < S; i++)
	{
		Delete(str[i - P]); // 기존의 index 시작값 삭제
		Add(str[i]); // 새로운 index 끝값 추가

		if (isDNAPart())
			cnt++;
	}

	cout << cnt << '\n';

	return 0;
}