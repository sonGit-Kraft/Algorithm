#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	double m, sum = 0;

	cin >> n; //과목 개수 입력

	int* arr = new int[n]; //동적 배열 생성

	for (int i = 0; i < n; i++) //점수 입력
		cin >> arr[i];

	sort(arr, arr + n); //오름차순정렬
	m = arr[n - 1]; //점수 중 최댓값을 m으로 지정

	for (int i = 0; i < n; i++) //모든 점수를 점수/M*100로 바꾸어 합에 더함
		sum += arr[i] / m * 100;
	
	cout << sum / n; //새로운 평균값 출력
	
	delete[] arr; //동적 할당 해제

	return 0;
}