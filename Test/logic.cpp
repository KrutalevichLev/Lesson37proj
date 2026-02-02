#include "logic.h"

bool check_equal_color(int x1, int x2, int y1, int y2) {
	bool exam = (x1 + y1) % 2 == (x2 + y2) % 2;

	return exam;
}