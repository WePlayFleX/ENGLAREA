#include <iostream>

using namespace std;

struct Distance
{
	int feet;
	float inches;
};

struct Room
{
	Distance lenght;
	Distance width;
};

int main()
{
	Room dining;
	dining.lenght.feet = 13;
	dining.lenght.inches = 6.5;
	dining.width.feet = 10;
	dining.width.inches = 0.0;

	float l = dining.lenght.feet + dining.lenght.inches / 12;
	float w = dining.width.feet + dining.width.inches / 12;

	cout << "The area of the room is " << l * w 
		<< " square feet " << endl;

	system("pause");
	return 0;
}