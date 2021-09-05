#include <iostream>

int main() {
	int n = 0;
	std::cin >> n;
	int max = 0;
	int count = 0;
	int num = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> num;
		if (num > 0) {
			count++;
		} else {
			if (count > max)
				max = count;
			count = 0;
		}
	}
	if (count > max)
		max = count;
	std::cout << max << std::endl;
	return 0;
}
