#include "func.h"
int main() {
	system("chcp 1251");
	x = 5;
	f();
	printf("Значение функции при констатном значении x = %.0lf, равна %.4f\n", x, result);
	printf("Введите значение для x:");
	scanf("%lf", &x);
	if (x>=0) {
		f();
		printf("Значение функции при пользовательском значении x = %.4lf, равна %.4f\n", x, result);
	}
	else printf("Значение x должно быть больше 0");
	return 0;
}