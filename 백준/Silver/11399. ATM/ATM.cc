#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N; // 배열 크기 입력
    vector<int> P(N, 0); // 동적 배열 생성

    // 배열 값 입력
    for (int i = 0; i < N; i++)
        cin >> P[i]; 

    // 삽입 정렬 (오름차순 정렬)
    for (int i = 1; i < N; i++)
    {
        int insert_index = i - 1; // 삽입 위치를 찾기 시작할 인덱스
        int insert_value = P[i]; // 현재 삽입할 값

        // 삽입 위치를 찾으면서 요소를 오른쪽으로 이동
        while (insert_index >= 0 && P[insert_index] > insert_value)
        {
            P[insert_index + 1] = P[insert_index]; // shift 연산
            insert_index--; // 다음 index로 이동 (왼쪽으로)
        }

        P[insert_index + 1] = insert_value; // 삽입 위치에 삽입
    }

    vector<int> S(N, 0); // 합 배열

    // 합 배열 계산
    S[0] = P[0]; // 첫 번째 값은 그대로 사용
    for (int i = 0; i < N - 1; i++)
        S[i + 1] = S[i] + P[i + 1]; // 이전 누적합 + 현재 값

    // 합 배열의 총합 계산
    int total = 0;
    for (int i = 0; i < N; i++)
        total += S[i];

    cout << total << '\n'; // 결과 출력
    return 0;
}