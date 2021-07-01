/**
 * Однажды известный профессор обнаружил описания k конечных автоматов.
 * По его мнению, нетривиальность конечного автомата, имеющего n состояний и m переходов,
 * можно описать целым числом d = 19m + (n + 239)*(n + 366) / 2 . Чем больше d, тем больший интерес для науки представляет изучение его свойств.
 * 
 * Помогите профессору вычислить нетривиальность имеющихся у него автоматов.
 * 
 * Входные данные
 * Первая строка входного файла INPUT.TXT содержит целое число k (1 ≤ k ≤ 10000) – количество конечных автоматов.
 * Следующие k строк содержат по два целых числа ni (0 ≤ ni ≤ 1000) и mi (0 ≤ mi ≤ 26ni2) – число состояний и переходов i-го автомата.
 * 
 * Выходные данные
 * Выходной файл OUTPUT.TXT должен состоять из k строк. На i-й строке выходного файла выведите одно число – нетривиальность i-го автомата.
 **/

#include <iostream>
#include <fstream>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	unsigned k;
	ifs >> k;
	if (k >= 1 && k <= 10000) {
		unsigned n, m;
		unsigned long long d;
		for (int i = 1; i <= k; i++) {
			ifs >> n >> m;
			d = 19 * m + (n + 239) * (n + 366) / 2;
			ofs << d;
			if (i != k)
				ofs << std::endl;
		}
	}

	ifs.close();
	ofs.close();
	return 0;
}