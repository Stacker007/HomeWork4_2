/*Ввести ширину треугольника и вывести на экран треугольник вида :

*****
 ***
  *

*/

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int width;
	do
	{
		cout << "Введите ширину треугольника ";
		cin >> width;
		if (width % 2 == 0 && width > 1) cout << "Количество символов автоматически увеличено до " << ++width << endl;
	} while (width < 1);
	for (int space = 0, star = width; star > 0; space++, star-=2) {
		for (int spaceTmp = space; spaceTmp ; spaceTmp--) cout << " ";
		//cout << space;
		for (int starTmp = star; starTmp > 0 ; starTmp--) cout << "*";
		cout << endl;
	}
	system("pause");
	return 0;
}
