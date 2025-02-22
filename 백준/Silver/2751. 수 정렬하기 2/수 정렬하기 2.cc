#include <iostream>
#include <vector>
using namespace std;

#define MAX_SIZE 1000000

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;

    vector<bool>count_P(MAX_SIZE + 1, 0); // 양수 카운트 (0 ~ 1000000)
    vector<bool>count_N(MAX_SIZE + 1, 0); // 음수 카운트 (0 ~ -1000000)
    
    for (int i = 0; i < N; i++)
    {
        int temp; cin >> temp; // 숫자 입력

        // 입력값의 존재 여부를 bool형 배열에 기록
        if (temp >= 0) // 양수 또는 0일 때
            count_P[temp] = true; // true 저장 (숫자 존재 여부 기록)
        else // 음수일 때
            count_N[-temp] = true; // true 저장 (숫자 존재 여부 기록)
    }

    // 음수 출력 (-1000000부터 -1까지 검사)
    for (int i = MAX_SIZE; i > 0; i--)
        if (count_N[i]) // true일 때 (숫자가 존재할 때)
            cout << -i << '\n';

    // 양수 또는 0 출력 (0부터 1000000까지 검사)
    for (int i = 0; i <= MAX_SIZE; i++)
        if (count_P[i]) // true일 때 (숫자가 존재할 때)
            cout << i << '\n';
 
    return 0;
}