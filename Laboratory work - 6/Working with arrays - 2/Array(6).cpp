/* Задача:
     Вычислить сумму модуля элементов массива, которые расположены после 1-го отрицательного элемента*/

#include <iostream>  //Подключение библиотеки функции ввода-вывода.
#include <math.h>   //Подключение библиотеки для нашего модуля abs.
using namespace std;

int main() {
	int i; //Переменная для цикла.
	int n = rand() % 20 + 10; //Объявляем n случайными числами от 10 до 20.
	int *array = new int[n]; //Объявлем массив array новым числом, это наше рандомное число.
	for (i = 0; i < n; i++) { //Создаем цикл и заполняем массив рандомными числами от 100 до -50.
		array[i] = rand() % 100 + (-50);
		cout << array[i] << " ";
	 }
	cout << endl;
	int sum = 0; // Для нахождения суммы, заводим новую переменную, куда будем запихивать наши числа.
	for (i = 0; i < n; i++) {
		if (array[i] < 0)
			sum = sum + abs(array[i]); // Складываем числа с модулем abs( эта функция находится в библиотеки math.h )
	 }
	for (i = 0; i < n; i++) { //Т.к нам нужно после первого элемента сложить, то находим этот первый элемент и вычитаем его из нашей суммы. ( Конечно, можно было это число просто исключить, но я забыл, как это сделать =) )
		if (array[i] < 0) {
			sum = sum + array[i];
			goto make; // Ссылаемся на make, ибо если продолжим цикл, мы просто получим 0 на выходе, т.к начнется все также вычитаться.
		}
	}

make:;

	cout << "|sum|= " << sum; //Выводим на экран.
	cout << endl;
	system("pause");
	return 0;
}
