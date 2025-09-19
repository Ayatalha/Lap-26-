// Lap 26-.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	int rows = 4;
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= rows-i; j++) {
			cout << " ";
			
		}
		for (int r = 1; r <= i; r++) {
			cout << num;
			num++;
		}
		cout << endl;
	}


}

