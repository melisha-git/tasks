/*
 * На уроках информатики вас, наверное, учили переводить числа из одних систем счисления в другие и выполнять другие подобные операции. Пришло время продемонстрировать эти знания. Найдите количество единиц в двоичной записи заданного числа.
 * Входные данные
 * Во входном файле INPUT.TXT записано целое число n (0 ≤ n ≤ 2×109).
 *
 * Выходные данные
 * В единственную строку выходного файла OUTPUT.TXT нужно вывести одно целое число — количество двоичных единиц в записи числа n.
 */

#include <iostream>

int main() {
	long n;
	std::cin >> n;
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (n & (1<<i))
			count++;
	}
	std::cout << count;
	return 0;
}
