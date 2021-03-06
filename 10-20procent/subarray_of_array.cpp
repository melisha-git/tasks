/*
 * Пусть задан массив целых чисел а1, а2, ..., аn. Назовем его подмассивом f(i,j) массив, составленный из чисел массива аi, ai+1,..., aj-1, aj. Напишите программу, которая будет выводить подмассивы массива a.
 *
 * Входные данные
 * Первая строка входного файла INPUT.TXT содержит число n (1 ≤ n ≤ 1000) - количество элементов в массиве а. Во второй строке содержатся числа a1, a2, … , аn разделенные пробелом. Все аi находятся в диапазоне от -231 до 231 - 1. В третьей строке находится m (1 ≤ m ≤ 100) — количество подмассивов, которые необходимо вывести. Следующие m строк содержат пары чисел ik, jk (1 ≤ ik ≤ jk ≤ n).
 *
 * Выходные данные
 * В выходной файл OUTPUT.TXT для каждой пары (ik,jk) в отдельной строке выведите подмассив f(ik,jk).
 */

#include <iostream>

int main() {
	int16_t n;
	std::cin >> n;
	int a[n], aN;
	for (int i = 0; i < n; i++)
	{
		std::cin >> aN;
		a[i] = aN;
	}
	int16_t m;
	int16_t j, k;
	std::cin >> m;
	for (int i = 0; i < m; i++) {
		std::cin >> j >> k;
		for (; j <= k; j++) {
			std::cout << a[j - 1] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
