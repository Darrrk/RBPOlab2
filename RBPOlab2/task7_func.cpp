#include <math.h>
extern double x, result;
void f() {
	result = (((x + 2) / (sqrt(2 * x))) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - (sqrt(2))) / (x + 2));
}