/*
 * Задано время отправления поезда и время в пути до конечной станции. Требуется написать программу, которая найдет время прибытия этого поезда (возможно, в другие сутки).
 *
 * Входные данные
 * Входной файл INPUT.TXT содержит две строки. В первой строке задано время отправления, а во второй строке – время в пути. Время отправления задается в формате «HH:MM», где HH время в часах, которое принимает значение от 00 до 23, ММ – время в минутах, которое принимает значение от 00 до 59. Время в пути задается двумя неотрицательными целыми числами – количество часов и количество минут. Числа разделяются одним пробелом. Количество часов не превышает 120, минут – 59.
 * Выходные данные
 * Выходной файл OUTPUT.TXT должен содержать одну строку – время прибытия поезда на конечную станцию. Формат вывода этого времени совпадает с форматом ввода времени отправления.
 */

#include <iostream>

int main() {
	int h, m, h1, m1;
	char c;
	std::cin >> h >> c >> m >> h1 >> m1;
	h += h1;
	m += m1;
	h += m / 60;
	m = m % 60;
	while (h >= 24) {
		h -= 24;
	}
	std::cout << h / 10 << h % 10 << c << m / 10 << m % 10;
	return 0;
}