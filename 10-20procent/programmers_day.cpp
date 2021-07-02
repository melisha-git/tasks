/**
 * День программиста отмечается в 255-й день года (при этом 1 января считается нулевым днем). Требуется написать программу, которая определит дату (месяц и число григорианского календаря), на которую приходится День программиста в заданном году.
 * 
 * В григорианском календаре високосным является:
 * 
 * год, номер которого делится нацело на 400
 * год, номер которого делится на 4, но не делится на 100
 * 
 * Входные данные
 * В единственной строке входного файла INPUT.TXT записано целое число от 1 до 9999 включительно, которое обозначает номер года нашей эры.
 * 
 * Выходные данные
 * В единственную строку выходного файла OUTPUT.TXT нужно вывести дату Дня программиста в формате DD/MM/YYYY, где DD — число, MM — номер месяца (01 — январь, 02 — февраль, ..., 12 — декабрь), YYYY — год в десятичной записи.
 **/

#include <iostream>
#include <fstream>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	int year;
	ifs >> year;
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		ofs << "12";
	} else {
		ofs << "13";
	}
	ofs << "/09/";
	if (year < 10) ofs << "000";
	else if (year < 100 && year >= 10) ofs << "00";
	else if (year < 1000 && year >= 100) ofs << "0";
	ofs << year;
	ifs.close();
	ofs.close();
	return 0;
}
