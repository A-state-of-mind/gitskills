#include<iostream>
using namespace std;
int main()
{
	/*char name1[50], name2[50];
	cout << "请输入发件人与收件人的姓名" << endl;
//	cin >> name1 >> name2;
	cin.getline(name1, 50);
	cin.getline(name2, 50);
	cout << "##########################################" << endl;
	cout << name1 << endl;
	cout << endl;
	cout << "Happy birthday to you!" << endl;
	cout << endl;
	cout << "     sincerely yours  " << name2 << endl;
	cout << "##########################################" << endl; */

	/*int a, b, c;
	cin >> a >> b;
	c = a + b;
	cout << c << endl;*/

	int year, money;
	double sum, rate;
	cin >> year >> money >> rate;
	sum = money * pow((1 + rate),year);
	cout << sum;

	system("PAUSE");

	return 0;
}