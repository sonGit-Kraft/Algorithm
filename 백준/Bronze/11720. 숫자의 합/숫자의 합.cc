#include <iostream>
using namespace std;

int main() {
	int N, tot=0;
	cin >> N;

	char* k=new char[N];
	cin >> k;

	for (int i = 0; i < N; i++) {
		tot += k[i] -48;
	}

	cout << tot << endl;
}