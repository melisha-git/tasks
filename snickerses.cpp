/*
 * Подается сумма - количество денег, которое получает программист в месяц.
 * Одна шоколадка сникерс стоит 24 рубля.
 * Сколько условно шоколадок может купить программист сейчас и полсе того, как повысить ему зарплату на 12%
*/

#include <iostream>

int main() {
	std::cout << "How much does a programmer earn?" << std::endl;
	int32_t n;
	std::cin >> n;
	std::cout << "Before raising the salary, he can buy " << int32_t(n / 24) << " snickerses" << std::endl;
	std::cout << "After raising the salary, he can buy " << int32_t((n + (n / 100 * 12)) / 24) << " snickerses" << std::endl;
	return 0;
}