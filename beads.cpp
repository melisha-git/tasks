/*
 * В шкатулке хранится разноцветный бисер (или бусины). Все бусины имеют одинаковую форму, размер и вес. Бусины могут быть одного из N различных цветов. В шкатулке много бусин каждого цвета.
 * Требуется определить минимальное число бусин, которое можно не глядя вытащить из шкатулки так, чтобы среди них гарантированно были две бусины одного цвета.
 * Входные данны
 * Входной файл INPUT.TXT содержит одно натуральное число N - количество цветов бусин (1 ≤ N ≤ 10 9 ).
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите ответ на поставленную задачу.
*/

#include <fstream>
#include <iostream>
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
	std::string str;
	std::getline(ifs, str);
	int x = stoi(str);
	ofs << x + 1;
	ifs.close();
	ofs.close();
	return 0;
}
