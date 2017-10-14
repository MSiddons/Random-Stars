#include <iostream>
#include <stdlib.h> //srand rand
#include <time.h> //time
using namespace std;

int main()
{
	int count = 0, row = 1, rnd;
	srand(time(NULL)); //set the seed for your random number to be the current time
	while (row < 21) // output 20 lines
	{
		rnd = rand() % 8 + 1; //assign random number between 1 and 8
		while (count < rnd)
		{
			cout << "*";
			count++;
		}
		row++;
		count = 0;
		cout << endl;
	}
	system("pause");
	return 0;
}