/*
 * Вова купил билет в трамвае 13-го маршрута и сразу посчитал суммы первых трёх цифр и последних трёх цифр номера билета (номер у билета шестизначный). Оказалось, что суммы отличаются ровно на единицу. «Я в одном шаге от счастья», — подумал Вова, — «или предыдущий или следующий билет точно счастливый». Прав ли он?
 *
 * Входные данные
 * Входной файл INPUT.TXT содержит в первой строке число K – количество тестов. В следующих K строках записаны номера билетов. Количество тестов не больше 10. Номер состоит ровно из шести цифр, среди которых могут быть и нули. Гарантируется, что Вова умеет считать, то есть суммы первых трех цифр и последних трех цифр отличаются ровно на единицу.
 *
 * Выходные данные
 * Выходной файл OUTPUT.TXT должен содержать K строк, в каждой из которых для соответствующего теста следует указать "Yes", если Вова прав, и "No", если нет.
 */

#include <iostream>
#include <string>

void sum(int &left, int &right) {
	left = left / 100 + (left % 10) + (left / 10 % 10);
	right = right / 100 + (right % 10) + (right / 10 % 10);
}

void swap(int &left, int &right) {
	int tmp = left;
	left = right;
	right = tmp;
}

int main() {
	int16_t k;
	int left, right;
	std::cin >> k;
	int str;
	for (int16_t i = 0; i < k; i++) {
		std::cin >> str;
		left = str / 1000;
		right = str % 1000;
		sum(left, right);
		if (left > right)
			str++;
		else
			str--;
		left = str / 1000;
		right = str % 1000;
		sum(left, right);
		if (left == right)
			std::cout << "Yes";
		else
			std::cout << "No";
		std::cout << std::endl;
	}
	return 0;
}
