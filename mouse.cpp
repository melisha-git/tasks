

#include <iostream>
#include <fstream>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	int w, h, r, max = 1000000000;

	ifs >> w >> h >> r;

	if (w <= max && h <= max && r <= max) {
		if (r * 2 > w || r * 2 > h) {
			ofs << "NO";
		} else {
			ofs << "YES";
		}
	}

	ifs.close();
	ofs.close();
	return 0;
}
