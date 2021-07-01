/**
 * Услуги телефонной сети оплачиваются по следующему правилу: за разговоры до А минут в месяц – В рублей за минуту, а разговоры сверх установленной нормы оплачиваются из расчета С рублей за минуту. Требуется написать программу, вычисляющую плату за пользование телефоном для разговоров продолжительностью Т минут в месяц.
 * 
 * Входные данные
 * Входной файл INPUT.TXT содержит натуральные числа A, B, C и T, не превышающие 1000. Числа располагаются в одной строке и разделены пробелами.
 * 
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите единственное целое число – месячную плату за пользование телефоном.
 **/

#include <iostream>
#include <fstream>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	int16_t A, B, C, T, res;
	ifs >> A >> B >> C >> T;
	for (res = 0; T > 0 && A > 0; T--, A--) {
		res += B;
	}
	for (; T > 0; T--) {
		res += C;
	}
	ofs << res;
	ifs.close();
	ofs.close();
	return 0;
}