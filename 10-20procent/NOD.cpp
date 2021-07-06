/*
 * Даны два натуральных числа A и B. Требуется найти их наибольший общий делитель (НОД).
 * Входные данные
 * Во входном файле INPUT.TXT в единственной строке записаны натуральные числа A и B через пробел (A, B ≤ 109).
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите НОД чисел А и В.
 */

#include <iostream>

long long nod(long long a, long long b) {
	if (a > b && a % b == 0)
		return b;
	if (b > a && b % a == 0)
		return a;
	if (a > b)
		return (nod(b, a % b));
	else if (b > a)
		return (nod(a, b % a));
	else
		return a;
}

int main() {
	long long A, B;
	std::cin >> A >> B;
	std::cout << nod(A, B);
	return 0;
}
