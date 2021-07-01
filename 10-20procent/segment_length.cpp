/**
 * Отрезок задан координатами своих концевых точек. Требуется вычислить длину этого отрезка.
 * 
 * Входные данные
 * Входной файл INPUT.TXT содержит координаты концов отрезка в формате X1 Y1 X2 Y2 . Все координаты – целые числа, не превышающие 1000 по абсолютной величине.
 * 
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите длину отрезка с точностью 10-5.
 **/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	double x1, y1, x2, y2;
	ifs >> x1 >> y1 >> x2 >> y2;
	double res;
	res = static_cast<double>(std::sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2)));
	ofs << std::setprecision(12) << res;
	ifs.close();
	ofs.close();
	return 0;
}
