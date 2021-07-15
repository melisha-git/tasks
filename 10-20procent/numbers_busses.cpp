/*
 * Однажды Вася очень долго просидел на остановке, прежде чем дождался своего автобуса. Чтобы как-то занять время, он решил записывать на листочке государственные регистрационные номера проходящих мимо автобусов, следующих по другому маршруту, нежели нужен был Васе. При этом производилась запись лишь основного номера, без учета региональной принадлежности. В итоге Васе удалось записать N таких номеров.
 *
 * Основная часть государственного регистрационного номера состоит из 6 символов: трех букв и трех цифр. Сначала идет буква, затем 3 цифры и еще 2 буквы заканчивают запись. В качестве цифр могут использоваться любые цифры от 0 до 9, а в качестве букв только прописные буквы, обозначения которых присутствуют как в английском, так и в русском алфавите, т.е. только следующие символы: A, B, C, E, H, K, M, O, P, T, X, Y. Например, «P204BT» - правильный номер, а «X182YZ» и «ABC216» - нет.
 *
 * Ваша задача заключается в проверке правильности проделанной Васей работы. А именно, нужно определить, какие из номеров соответствуют принятому стандарту, а какие нет.
 *
 *
 * Входные данные
 * Первая строка входного файла INPUT.TXT содержит единственное натуральное число N – количество записанных Васей номеров (N ≤ 50). Далее следует N строк с записями номеров автобусов. Длины строк от 1 до 300 и содержат только символы с кодами ASCII от 33 до 127 (не содержат пробелов, специальных и русских символов).
 *
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите N строк, в i-й строке должно содержаться «Yes», если соответствующая i-я запись номера верна и «No» в противном случае.
 */

#include <iostream>
#include <string>

bool nice_sumbol(const char &k, const bool &sum) {
	if (sum == 1)
		return (k == 'A' || k == 'B' || k == 'C' || k == 'E' || k == 'H' || k == 'K' || k == 'M' || k == 'O' || k == 'P' || k == 'T' || k == 'X' || k == 'Y');
	else
		return (k >= '0' && k <= '9');
}

bool nice_number(const std::string &number) {
	int count = 0;
	if (number.size() == 6) {
		for (int i = 0; i < number.size(); i++) {
			if ((i == 0 || i == 4 || i == 5) && (nice_sumbol(number[i], 1)))
				count++;
			if ((i == 1 || i == 2 || i == 3) && (nice_sumbol(number[i], 0)))
				count++;
		}
		return count == 6;
	} else
		return false;
}

int main() {
	int16_t n;
	std::cin >> n;
	std::string number;
	for (int16_t i = 0; i < n; i++) {
		std::cin >> number;
		if (nice_number(number))
			std::cout << "Yes";
		else
			std::cout << "No";
		std::cout << std::endl;
	}
	return 0;
}