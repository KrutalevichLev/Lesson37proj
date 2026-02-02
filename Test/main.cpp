#include "logic.h"

int main() {
	int x1, x2;
	int y1, y2;

	cout << "Enter x1, y1: ";
	cin >> x1 >> y1;
	cout << "Enter x2, y2: ";
	cin >> x2 >> y2;
	if (x1 < 1 || x1 > 8 || x2 < 1 || x2 > 8
		|| y1 < 1 || y1 > 8 || y2 < 1 || y2 > 8) {
		return -1;
	}

	bool result = check_equal_color(x1, x2, y1, y2);

	string msg = result ? "The cells have equal colors." : "The cells are not of equal colors.";

	cout << msg;
	
	return 0;
}
