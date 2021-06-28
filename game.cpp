#include <fstream>
#include <iostream>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	int k, res = 0;
	ifs >> k;

	res = k * 100 + 90 + (9 - k);
	ofs << res;
	ifs.close();
	ofs.close();
	return 0;
}