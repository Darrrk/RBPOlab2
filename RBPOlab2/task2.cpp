#include <iostream>
#include <math.h>
double f(double x) {
	return (((x + 2) / (sqrt(2 * x))) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - (sqrt(2))) / (x + 2));
}
int main() {
	system("chcp 1251");
	const int x1 = 5;
	printf("Значение функции при констатном значении x = %d, равна %.4f\n",x1, f(x1));
	double x2;
	printf("Введите значение x:");
	scanf("%lf", &x2);
	if (x2>=0){
		printf("Значение функции при констатном значении x = %.4lf, равна %.4f\n", x2, f(x2));
	}else printf("Значение должно быть больше или равно 0");
	return 0;
}