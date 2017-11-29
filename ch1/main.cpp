#include<iostream>
#include<cstdlib>

extern void ex1_1();
extern void ex1_2();
extern void ex1_3();
extern void ex1_4();
extern void ex1_5();
extern void ex1_6();
extern void ex1_7();
extern void hw1_1();
extern void hw1_2();
extern void hw1_3();
extern void hw1_4();

using namespace std;

int main(void)
{
	int input;
	do {
		system("cls");
		cout << "1.  第一個 C++ 程式 使用命名空間    std 範例" << endl;
		cout << "2.  第一個 C++ 程式 不使用命名空間  std 範例" << endl;
		cout << "3.  bool 型別與 C++ 的關鍵字 範例 " << endl;
		cout << "4.  cout 格式化: 輸出寬度(Output Width)" << endl;
		cout << "5.  cout 格式化: 對齊方式(Alignment)" << endl;
		cout << "6.  cout 格式化: 精準度(Precision)" << endl;
		cout << "7.  cin 輸入" << endl;
		cout << "8.  hw1" << endl;
		cout << "9.  hw2" << endl;
		cout << "10. hw3" << endl;
		cout << "11. hw4" << endl;
		cout << "-------------------------------" << endl;
		cout << "請輸入要執行的範例(或 '0' 結束程式執行!?) ";
		cin >> input;

		while (getchar() != '\n')
			;

		switch (input) {
		case 0:
			break;
		case 1:
			ex1_1();
			break;
		case 2:
			ex1_2();
			break;
		case 3:
			ex1_3();
			break;
		case 4:
			ex1_4();
			break;
		case 5:
			ex1_5();
			break;
		case 6:
			ex1_6();
			break;
		case 7:
			ex1_7();
			break;
		case 8:
			hw1_1();
			break;
		case 9:
			hw1_2();
			break;
		case 10:
			hw1_3();
			break;
		case 11:
			hw1_4();
			break;
		default:
			cout << "輸入的數字不再範圍內!!" << endl;
			system("pause");
			break;
		}
	} while (input != 0);
}