/**
 * Напишите программу, возводящую число, оканчивающееся на 5, в квадрат для того, чтобы Вася смог проверить свои навыки.
 * 
 * Входные данные
 * В единственной строке входного файла INPUT.TXT записано одно натуральное число А, оканчивающееся на цифру 5, не превышающее 4*105.
 * 
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите одно натуральное число - A2 без лидирующих нулей.
 **/

#include <iostream>
#include <fstream>
#include <cmath>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	unsigned int a;
	ifs >> a;
	if (a <= 400000 && a % 5 == 0 && a % 10 != 0) {
		a = a / 10;
		if (a != 0)
			ofs << a * (a + 1);
		ofs << "25";
	}

	ifs.close();
	ofs.close();
	return 0;
}