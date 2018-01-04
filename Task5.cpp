/*Вывести на экран шахматную доску 8*8 клеток с размером 
клеток N символов, при этом белые клетки выводятся 
символом, а черные – символом *. Например,

***---***---***---***---
***---***---***---***---
***---***---***---***---
---***---***---***---***
---***---***---***---***
---***---***---***---***.*/

#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int size;
	const int CELL = 8;
	do {
		cout << "Введите размер клетки ";
		cin >> size;
	} while (size < 1);
	
	for (int str = 0; str < size*CELL; str++) { //Счетчик строк
		if ((str / size) % 2 == 0) {
			for (int column = 0; column < size*CELL; column++)
				if ((column / size) % 2 == 0) cout << "*";
				else cout << " ";
		}
		else for (int column = 0 ; column < size*CELL; column++)
			if ((column / size) % 2 == 0) cout << " ";
			else cout << "*";
		cout << endl;
	}

	
	system("pause");
}
