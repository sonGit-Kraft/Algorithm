#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    vector<vector<int>>HW(N, vector<int>(2, 0)); // (키, 몸무게) 저장
    vector<int>rank(N, 0); // 최종 등수 저장

    for (int i = 0; i < N; i++)
        cin >> HW[i][0] >> HW[i][1];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            // 키와 몸무게 둘 다 커야만 덩치가 더 크다고 판단
            if (i != j && HW[i][0] < HW[j][0] && HW[i][1] < HW[j][1]) 
                rank[i]++; // 자신보다 더 큰 덩치의 사람 카운트

    // 최종 등수 출력
    // 자신보다 더 큰 덩치의 사람이 k명이라면 그 사람의 덩치 등수는 k+1
    for (int i = 0; i < N; i++)
        cout << rank[i] + 1 << ' '; 
}