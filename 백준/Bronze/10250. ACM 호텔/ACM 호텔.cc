#include <iostream>
using namespace std;

class Room
{
private:
	int H;
	int W;
	int N;
	int Pos;
public:
	Room(int H, int W, int N)
		:H(H), W(W), N(N)
	{
	}
	int GetRoomX()
	{
		if(N%H==0)
			return N / H;
		else 
			return N / H + 1;
	}
	int GetRoomY()
	{
		if (N % H == 0)
			return H;
		else
			return N % H; 
	}
	void initPos(int pos)
	{
		Pos = pos;
	}
	void ShowPos()
	{
		cout << Pos << endl;
	}
};
int main(void)
{
	int T;
	int H, W, N;
	int posX, posY;

	cin >> T;
	Room* TR[100];

	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;
		TR[i] = new Room(H, W, N);
		posX = TR[i]->GetRoomX();
		posY = TR[i]->GetRoomY();
		TR[i]->initPos(posY * 100 + posX);
	}
	for (int i = 0; i < T; i++)
		TR[i]->ShowPos();

	for (int i = 0; i < T; i++)
		delete TR[i];

	return 0;
}