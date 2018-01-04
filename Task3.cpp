/*3.	 Ввод последовательности чисел заканчивается нулем. 
Написать программу подсчета суммы тех чисел, 
порядковые номера которых являются простыми числами.
*/


#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	int num, sum = 0, i = 1;
	do {
		int tmp = 0;
		cout << "Введите число №"<< i <<" для выхода введите \"0\"" << endl;
		cin >> num;
		for (int k = 1; k < i; k++) if (i % k == 0) tmp++;
		if (tmp ==1)  sum += num;
		i++;
	} while (num != 0);

	cout << "Сумма чисел с простыми порядковыми номерами " << sum << endl;
	
	system("pause");
	return 0;

}
