/*Требуется сложить два целых числа А и В.
 * Входные данные
 * В единственной строке входного файла INPUT.TXT записаны два натуральных числа через пробел. Значения чисел не превышают 109.
 *
 * Выходные данные
 * В единственную строку выходного файла OUTPUT.TXT нужно вывести одно целое число — сумму чисел А и В.
*/


#include <iostream>
#include <fstream>
#include <string>

int displayError(std::string err) {
	std::cerr << err << std::endl;
	return 0;
}

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");
	if (!ofs.is_open() || !ifs.is_open())
		return displayError("Error files");
	int a, b;
	ifs >> a >> b;
	ofs << a + b;
	ifs.close();
	ofs.close();
	return 0;
}