#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dice
{
public:
	int roll();
	float average(Dice, int);
	float average(int arr[], int);
private:
	int n;
};
int main()
{
	int count;
	int k;
	Dice myDice;

	int Ar[100];
	cout << "please enter the number of rolls \n";
	cin >> k;
	for (count = 0; k - 1; count++)
	{
		Ar[count] = myDice.roll();
	}
	cout << myDice.average(myDice, k);
}
int Dice::roll()
{
	srand((unsigned)time(0));
	return(rand());
}
float Dice::average(int Arr[], int nmr)
{
	int y = 0;
	int j;
	nmr = n;
	for (j = 0; nmr - 1; j++)
	{
		y = Arr[j] + y;
	}
	return(float(y / nmr));
}
float Dice::average(Dice, int nm)
{
	nm = n;
	int c;
	int z = 0;
	for (c = 0; nm - 1; c++)
		z = roll() + z;
	return(float(z / nm));
}
