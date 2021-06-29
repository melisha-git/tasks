/**
 * В отделе работают 3 сотрудника, которые получают заработную плату в рублях.
 * Требуется определить: на сколько зарплата самого высокооплачиваемого из них отличается от самого низкооплачиваемого.
 * Входные данные
 * В единственной строке входного файла INPUT.TXT
 * записаны размеры зарплат всех сотрудников через пробел.
 * Каждая заработная плата – это натуральное число, не превышающее 105.
 * Выходные данные
 * В выходной файл OUTPUT.TXT необходимо вывести одно целое число — разницу между максимальной и минимальной зарплатой.
**/

#include <iostream>
#include <fstream>

namespace tmp {
	template <typename T>
	T min(const T &a, const T &b, const T &c) {
		T res = a;
		if (c < b && c < a)
			res = c;
		else if (b < a && b < c)
			res = b;
		return res;
	}

	template <typename T>
	T max(const T &a, const T &b, const T &c) {
		T res = a;
		if (c > b && c > a)
			res = c;
		else if (b > a && b > c)
			res = b;
		return res;
	}
}

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	int *salaryes = new int [3];
	ifs >> salaryes[0] >> salaryes[1] >> salaryes[2];
	ofs << tmp::max(salaryes[0], salaryes[1], salaryes[2]) - tmp::min(salaryes[0], salaryes[1], salaryes[2]);
	ifs.close();
	ofs.close();
	return 0;
}
