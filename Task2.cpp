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
		cout << "Введите ширину не менее 2-х символов " << endl;
		cin >> width;
	} while (width < 2);


	do {
		cout << "Введите высоту не менее 2-х символов " << endl;
		cin >> height;
	} while (height < 2);

	for (int i = 0; i < width; i++) cout << "*";
	cout << endl;
	for (int k = 1; k < (height - 1); k++) {
		for (int i = 0; i < width; i++) {
			if (i == 0 || i == width - 1)  cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < width; i++) cout << "*";
	system("pause");
	return 0;

}
