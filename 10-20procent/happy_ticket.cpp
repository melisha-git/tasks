/**
 * Вы пользуетесь общественным транспортом? Вероятно, вы расплачивались за проезд и получали билет с номером. Счастливым билетом называют такой билет с шестизначным номером, где сумма первых трех цифр равна сумме последних трех. Т.е. билет с номером 385916 – счастливый, т.к. 3+8+5=9+1+6. Вам требуется написать программу, которая проверяет счастливость билета.
 * 
 * Входные данные
 * В единственной строке входного файла INPUT.TXT записано одно целое число N (0 ≤ N < 106).
 * 
 * Выходные данные
 * В выходной файл OUTPUT.TXT нужно вывести «YES», если билет с номером N счастливый и «NO» в противном случае.
 **/

#include <iostream>
#include <fstream>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	int number, number2;
	ifs >> number;
	number2 = number / 1000;
	number = number % 1000;

	if ((number / 100) + (number % 10) + (number / 10 % 10) == 
	(number2 / 100) + (number2 % 10) + (number2 / 10 % 10))
		ofs << "YES";
	else
		ofs << "NO";

	ifs.close();
	ofs.close();
	return 0;
}
