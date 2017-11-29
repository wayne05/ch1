#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

void hw1_4()
{

	int i, k = 2, j = 3;
	cout << setw(4) << "*" << endl;

	for (i = 1; i <= 3; i++)
	{
		cout << setw(j);  j--;  cout << "*";
		cout << setw(i * 2); cout << "*" << endl;
	}

	for (i = 1; i <= 2; i++)
	{
		cout << setw(i + 1) << "*";
		cout << setw(k * 2) << "*" << endl;
		k--;
	}
	cout << setw(4) << "*" << endl;
	system("pause");
}