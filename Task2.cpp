/*Написать программу, которая выводит на экран фигуру вида:
************
*          *
*          *
************
Ширина и высота фигуры задаются пользователем.
*/


#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	int height, width;
		do {
		cout << "Введите ширину не менее 2-х" << endl;
		cin >> width;
	} while (width < 2);
	cout << "Введите символ" << endl;
	cin >> symbol;
	do {
		cout << "Сделайте выбор:\n" << "1-Горизонтальная линия\n" << "2-Вертикальная линия\n";
		cin >> choice;
	} while (choice != 1 && choice != 2);
	switch (choice)
	{
	case 1: for (int i = 0; i<count; i++) cout << symbol; break;
	case 2: for (int i = 0; i<count; i++) cout << symbol << endl; break;
	}
	cout << endl;
	system("pause");
	return 0;

}
