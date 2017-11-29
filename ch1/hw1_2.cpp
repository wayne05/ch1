#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

void hw1_2()
{
	int i, j, k, input;
	cout << "輸入星星數 : ";
	cin >> input;
	cout << setw(input + 1) << "*" << endl;

	for (i = 1; i <= input - 1; i++)
	{
		/*   左半部   */
		for (k = input - 1; k >= i; k--)   cout << " ";
		for (j = 1; j <= i; j++)	cout << "*";

		/*   右半部  */
		cout << setw(2);
		for (j = 1; j <= i; j++) cout << "*";
		cout << endl;
	}
	system("pause");
}