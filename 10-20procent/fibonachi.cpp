/*
 * Последовательностью Фибоначчи называется последовательность чисел a0, a1, ..., an, ..., где
 * a0 = 0, a1 = 1, ak = ak-1 + ak-2 (k > 1).
 *
 * Требуется найти N-е число Фибоначчи.
 *
 * Входные данные
 * Во входном файле INPUT.TXT записано целое число N (0 ≤ N ≤ 30).
 *
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите N-е число Фибоначчи.
 */

#include <iostream>

long fibonachi(int n) {
	if (n == 1)
		return 1;
	if (n == 0)
		return 0;
	return (fibonachi(n - 1) + fibonachi(n - 2));
}

int main() {
	int n;
	std::cin >> n;
	std::cout << fibonachi(n);
	return 0;
}
