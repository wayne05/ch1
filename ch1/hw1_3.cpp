#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

void hw1_3()
{
	int i, j;
	/* 上半部 */
	for (i = 1; i <= 7 / 2 + 1; i++)
	{
		for (j = 1; j <= (7 / 2 - i + 1); j++)
		{
			cout << " ";
		}

		for (j = 1; j <= (i * 2 - 1); j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	/* 下半部 */
	for (i = 1; i <= 7 / 2; i++)
	{
		for (j = i * 2 - 1; j >= i; j--)
		{
			cout << " ";
		}

		for (j = i * 2 - 1; j <= 5; j++)
		{
			cout << "*";
		}
		cout << endl;
	}


	system("pause");
}