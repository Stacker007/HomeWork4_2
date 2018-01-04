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
                         

	for (int k = 0; k < height; k++) {    //Цикл перебора строк
		if (k == 0 || k == height-1) for (int i = 0; i < width; i++) cout << "*";// Первая и последняя строка из звездочек	
		else for (int i = 0; i < width; i++) {   //Цикл перебора символов промежуточной строки
				if (i == 0 || i == width - 1)  cout << "*";// Первый и последний символ промежуточной строки
				else cout << " "; 	    //Промежуточные символы промежуточной строки (пробелы)
			}
		cout << endl;
	}
	
	system("pause");
	return 0;

}
