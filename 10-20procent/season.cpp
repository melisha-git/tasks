/**
 * По заданному номеру месяца в году требуется определить время года.
 * 
 * Входные данные
 * Входной файл INPUT.TXT содержит натуральное число N (N≤100) – номер месяца.
 * 
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите для летних месяцев значение «Summer», для зимних – «Winter», для весенних – «Spring», для осенних – «Autumn». Если число не соответствует возможному значению месяца, то в этом случае следует вывести «Error».
 */

#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	int16_t n;
	std::string season;
	ifs >> n;
	if (n <= 100) {
		switch (n) {
		case 3:
		case 4:
		case 5:
			season = "Spring";
			break ;
		case 6:
		case 7:
		case 8:
			season = "Summer";
			break ;
		case 9:
		case 10:
		case 11:
			season = "Autumn";
			break ;
		case 12:
		case 1:
		case 2:
			season = "Winter";
			break ;
		default:
			season = "Error";
			break;
		}
		ofs << season;
	}

	ifs.close();
	ofs.close();
	return 0;
}
