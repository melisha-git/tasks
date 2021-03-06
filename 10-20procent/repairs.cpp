/**
 * Ваш любимый дядя – директор фирмы, которая делает евроремонты в офисах. В связи с финансово-экономическим кризисом, дядюшка решил оптимизировать
 * свое предприятие.
 * 
 * Давно ходят слухи, что бригадир в дядюшкиной фирме покупает лишнее количество стройматериалов, а остатки использует для отделки своей новой дачи.
 * Ваш дядя заинтересовался, сколько в действительности банок краски необходимо для покраски стен в офисе длиной L метров, шириной – W и высотой – H,
 * если одной банки хватает на 16м2, а размерами дверей и окон можно пренебречь? Заказов много, поэтому дядя попросил написать программу, которая будет
 * все это считать.
 * 
 * Входные данные
 * Входной файл INPUT.TXT содержит три натуральных числа L, W, H – длину, ширину и высоту офиса в метрах соответственно, каждое из которых не
 * превышает 1000.
 * 
 * Выходные данные
 * В выходной файл OUTPUT.TXT выведите одно целое число – минимальное количество банок краски, необходимых для покраски стен в офисе.
 **/

#include <iostream>
#include <fstream>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	int l, w, h, allSize, res;
	ifs >> l >> w >> h;
	allSize = 2 * (l * h + h * w);
	if (allSize % 16 != 0) {
		res = 1;
	} else {
		res = 0;
	}
	res += (allSize / 16);
	ofs << res;

	ifs.close();
	ofs.close();
	return 0;
}
