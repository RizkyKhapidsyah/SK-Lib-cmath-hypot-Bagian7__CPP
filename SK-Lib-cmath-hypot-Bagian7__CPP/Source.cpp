#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	double x = 7.4, y = 9.4, result;
	result = hypot(x, y);
	cout << "hypot(x, y) = " << result << endl;

	long double yLD, resultLD;
	x = 5.89;
	yLD = 7.847563526;

	resultLD = hypot(x, yLD);
	cout << "hypot(x, yLD) = " << resultLD;

	_getch();
	return 0;
}