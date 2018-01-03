/*1.	 Написать программу, которая выводит на экран
простые числа в диапазоне от 2 до 1000 (число считается 
простым, если делится только на себя и на 1).*/

#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	const int LOW = 2, HIGH = 1000;

	for (int i = LOW, tmp; i <= HIGH; i++) {
		tmp = 0;
		for (int k = 2; k < i; k++) if (i % k == 0) tmp++;
		if (tmp == 0) cout << i << endl;
	}
	
	system("pause");
}
