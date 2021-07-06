/*
 * Шулер показывает следующий трюк. Он имеет три одинаковых наперстка. Под первый (левый) он кладет маленький шарик. Затем он очень быстро выполняет ряд перемещений наперстков, каждое из которых – это одно из трех перемещений - A, B, C:
 *
 * A - обменять местами левый и центральный наперстки.
 * B - обменять местами правый и центральный наперстки,
 * C - обменять местами левый и правый наперстки.
 * Необходимо определить, под каким из наперстков окажется шарик после всех перемещений.
 * 
 * Входные данные
 * В единственной строке входного файла INPUT.TXT записана строка длиной от 1 до 50 символов из множества {A, B, C} – последовательность перемещений.
 *
 * Выходные данные
 * В единственную строку выходного файла OUTPUT.TXT нужно вывести номер наперстка, под которым окажется шарик после перемещений.
 */

#include <iostream>
#include <string>

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void A(int &left, int &mid, int &right) {
	swap(left, mid);
}

void B(int &left, int &mid, int &right) {
	swap(right, mid);
}

void C(int &left, int &mid, int &right) {
	swap(right, left);
}

int main() {
	std::string str;
	int left = 1, mid = 0, right = 0;
	std::cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'A')
			A(left, mid, right);
		else if (str[i] == 'B')
			B(left, mid, right);
		else if (str[i] == 'C')
			C(left, mid, right);
	}
	if (left == 1) 
		std::cout << '1';
	else if (mid == 1)
		std::cout << '2';
	else if (right == 1)
		std::cout << '3';
	return 0;
}
