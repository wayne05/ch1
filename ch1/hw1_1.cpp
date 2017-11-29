#include<iostream>
#include<cstdlib>

using namespace std;

void hw1_1()
{
	int a, b, c, d;
	cout << "請輸入星星的行數: ";
	cin >> a;
	for (b = 0; b < a; b++)
	{
		for (d = 1; d <= (a - b - 1); d++)
		{
			cout << " ";
		}
		for (c = 0; c <= (2 * b); c++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
}