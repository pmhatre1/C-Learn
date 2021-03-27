
/*

This is a preliminary program from the Cherno playlist to study classes

	Learnings from this program

	By Default the class makes everything private.


	.......................Enjoy the code.....................

*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Player
{
public:
	int x, y;
	int speed;


	void Move(int xa, int ya,int speed)
	{
		x = xa * speed;
		y = ya * speed;

	}
};

int main()
{
	Player player;

	player.Move(-1, 1,1);
	cout << player.x <<" "<< player.y;


}
