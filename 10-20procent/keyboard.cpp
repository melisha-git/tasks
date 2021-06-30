/**
 * Для данной буквы английского алфавита нужно вывести справа стоящую букву на стандартной клавиатуре.
 * При этом клавиатура замкнута, т.е. справа от буквы «p» стоит буква «a», от буквы «l» стоит буква «z», а от буквы «m» — буква «q».
 * 
 * Входные данные
 * Первая строка входного файла INPUT.TXT содержит один символ — маленькую букву английского алфавита.
 * 
 * Выходные данные
 * В выходной файл OUTPUT.TXT следует вывести букву стоящую справа от заданной буквы, с учетом замкнутости клавиатуры.
 **/

#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	std::string keyboard = "qwertyuiopasdfghjklzxcvbnm";
	char sum;
	ifs >> sum;
	if (sum != 'm')
		ofs << keyboard[keyboard.find(sum) + 1];
	else
		ofs << 'q';

	ifs.close();
	ofs.close();
	return 0;
}
