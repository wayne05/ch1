#include<iostream>
#include<cstdlib>

using namespace std;

void ex1_7()
{
	int ix;
	char cName[20];
	char cAddr[20];
	char cBirthDay[20];

	do {
		cout << "��J�Ǹ� "; cin >> ix;
		if (!cin.fail()) { cin.sync(); break; }
	} while (1);
	cout << "��J�m�W "; cin >> cName; cin.sync();
	while (getchar() != '\n')
		;
	cout << "��J�ͤ�(yymmdd) "; cin.getline(cBirthDay, 7);
	cout << "��J��} "; cin.get(cAddr, 10);
	cout << "�Ǹ� :" << ix << " �m�W : " << cName << endl;
	cout << "�ͤ� : " << cBirthDay << " ��} : " << cAddr << endl;
	system("pause");
}