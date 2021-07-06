/*
 * В книге на одной странице помещается K строк. Таким образом, на 1-й странице печатаются строки с 1-й по K-ю, на второй — с (K+1)-й по (2∙K)-ю и т.д. Напишите программу, которая по номеру строки в тексте определяет номер страницы, на которой будет напечатана эта строка, и порядковый номер этой строки на странице.
 *
 * Входные данные
 * Входной файл INPUT.TXT содержит число K – количество строк, которое печатается на странице, и число N – номер строки (1 ≤ K ≤ 200, 1 ≤ N ≤ 20000).
 *
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите два числа – номер страницы, на которой будет напечатана эта строка и номер строки на странице.
 */

#include <iostream>

int main() {
	int k, n;
	std::cin >> k >> n;
	int countK(0), countN(1);
	for (countK = k; countK < n; countK += k) {
		countN++;
	}
	std::cout << countN << " ";
	if (n % k != 0)
		std::cout << n % k;
	else
		std::cout << k;
}