/**
 * 
 **/

#include <iostream>
#include <fstream>

int main() {
	std::ifstream ifs("INPUT.TXT");
	std::ofstream ofs("OUTPUT.TXT");

	long long c, h, o;
	ifs >> c >> h >> o;
	if (c < 2 || h < 6 || o < 1) {
		ofs << 0;
	} else {
		c /= 2;
		h /= 6;
		long long res = o;
		if (c < o && c < h) {
			res = c;
		} else if (h < c && h < o) {
			res = h;
		}
		ofs << res;
	}

	ifs.close();
	ofs.close();
	return 0;
}
