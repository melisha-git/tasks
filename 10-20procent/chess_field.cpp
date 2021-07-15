/*
 * На стандартной шахматной доске 8х8 заданы координаты двух клеток. Требуется определить: имеют ли данные клетки одинаковый цвет?
 *
 * Входные данные
 * Входной файл INPUT.TXT содержит целые числа x1, y1, x2, y2, описывающие координаты двух клеток (x1,y1) и (x2,y2). Ограничения: 1 ≤ x1,y1,x2,y2 ≤ 8.
 *
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите YES, если поля одного цвета, или слово NO в противном случае.
 */

#include <iostream>

int8_t whatColor(int16_t x, int16_t y) {
	int8_t color = 0;
	if ((x % 2 == 1 && y % 2 == 1) || (x % 2 == 0 && y % 2 == 0))
		color = 1;
	return color;
}

int main() {
	int16_t x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	int8_t color1 = whatColor(x1, y1), color2 = whatColor(x2, y2);
	if (color1 == color2)
		std::cout << "YES";
	else
		std::cout << "NO";
	std::cout << std::endl;
	return (0);
}
