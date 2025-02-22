#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() == b.length()) // 길이가 같으면
		return a < b; // 사전순 정렬
	return a.length() < b.length(); // 길이가 짭은 순 정렬
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; cin >> N; // 단어 개수 입력
	set<string>words_set; // set은 중복을 허용하지 않고 자동으로 정렬(사전순 정렬)되는 컨테이너

	for (int i = 0; i < N; i++)
	{
		string str; cin >> str; // 단어 입력
		words_set.insert(str); // 배열에 저장
	}

	vector<string>words_str(words_set.begin(), words_set.end()); // set -> vector
	sort(words_str.begin(), words_str.end(), compare); // 오름차순 정렬

	// 정렬된 배열 출력
	for(string word : words_str)
		cout << word<< '\n';
	
	return 0;
}