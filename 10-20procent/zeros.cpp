/*
 * Требуется найти самую длинную непрерывную цепочку нулей в последовательности нулей и единиц.
 *
 * Входные данные
 * В единственной строке входного файла INPUT.TXT записана последовательность нулей и единиц (без пробелов). Суммарное количество цифр от 1 до 100.
 *
 * Выходные данные
 * В единственную строку выходного файла OUTPUT.TXT нужно вывести искомую длину цепочки нулей.
 */

#include <iostream>
#include <string>

int main() {
	int count = 0, save = 0;
	std::string str;
	std::getline(std::cin, str);
	for (int i = 0; i < str.size(); i++) {
		count = 0;
		for (;str[i] == '0'; i++)
			count++;
		if (save < count) {
			save = count;
		}
	}
	std::cout << save << std::endl;
	return 0;
}
