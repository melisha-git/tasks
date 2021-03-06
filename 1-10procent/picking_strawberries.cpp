/**
 * Маша и Миша собирали землянику. Маше удалось сорвать X ягод, а Мише – Y ягод. Поскольку ягода была очень вкусной, то ребята могли какую то часть ягод съесть. По нашим подсчетам вместе они съели Z ягод.
 * Требуется определить: сколько ягод ребята собрали в результате, при этом следует проверить, не ошиблись ли мы в расчетах, подсчитывая количество съеденных ягод (их не должно было получиться больше, чем сорванных ягод).
 *
 *
 * Входные данные
 * Входной файл INPUT.TXT содержит три натуральных числа X, Y и Z, не превышающих 1000. Все числа расположены в первой строке файла и разделены пробелом.
 *
 * 
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите количество собранных ягод, если наши подсчеты оказались правдоподобными, либо слово «Impossible» в противном случае.
 **/

#include <iostream>
#include <fstream>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	int x, y, z;

	ifs >> x >> y >> z;

	if (x + y >= z) {
		ofs << x + y - z;
	} else {
		ofs << "Impossible";
	}

	ifs.close();
	ofs.close();
	return 0;
}
