/*
 * Белочка собрала в лесу N шишек c орешками.
 * Белочка очень привередливо выбирала шишки, и брала только те, в которых ровно M орешков.
 * Также известно, что для пропитания зимой ей необходимо не менее K орешков. Определите, хватит ли на зиму орешков белочке.
 * Входные данные
 * Входной файл INPUT.TXT содержит три натуральных числа: N, M и K (N, M ≤ 100, K ≤ 10 000).
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите «YES» если белочке хватит орешков и «NO» в противном случае.
 */

#include <iostream>
#include <fstream>

int main() {
	std::ifstream ifs;
	std::ofstream ofs;
	ifs.open("INPUT.TXT");
	ofs.open("OUTPUT.TXT");
	if (!ifs.is_open() || !(ofs.is_open())) {
		return 0;
	}
	int n;
	ifs >> n;
	int16_t m;
	ifs >> m;
	int16_t k;
	ifs >> k;
	if ((static_cast<int16_t>(n) * m) >= k) {
		ofs << "YES";
	} else {
		ofs << "NO";
	}
	ifs.close();
	ofs.close();
	return 0;
}