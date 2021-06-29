/*
 * Одна из основных операций с числами – их сравнение.
 * Мы подозреваем, что вы в совершенстве владеете этой операцией и можете сравнивать любые числа, в том числе и целые.
 * В данной задаче необходимо сравнить два целых числа.
 * Входные данные
 * В двух строчках входного файла INPUT.TXT записаны числа A и B, не превосходящие по абсолютной величине 2×10^9.
 * Выходные данные
 * Запишите в выходной файл OUTPUT.TXT один символ "<", если A < B, ">", если A > B и "=", если A=B.
 */

#include <iostream>
#include <fstream>

int main() {
	std::ifstream ifs;
	std::ofstream ofs;
	ifs.open("INPUT.TXT");
	ofs.open("OUTPUT.TXT");
	if (!ifs.is_open() || !ofs.is_open()) {
		return 0;
	}
	int a, b;
	ifs >> a;
	ifs >> b;
	switch (a < b) {
		case true :
			ofs << '<';
			break ;
		case false :
			if (a == b) {
				ofs << '=';
			} else
				ofs << '>';
	}
	ifs.close();
	ofs.close();
	return 0;
}