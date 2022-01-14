#include <iostream>
#include <math.h>
void f(const double& x, double& result);

int main() {
	system("chcp 1251");
	const int x1 = 5;
	double result=0;
	double x2;
	f(x1, result);
	printf("Значение функции при констатном значении x = %d, равна %.4f\n", x1, result);
	printf("Введите значение для x:");
	scanf("%lf", &x2);
	if(x2>=0){
	f(x2, result);
	printf("Значение функции при пользовательском значении x = %.4lf, равна %.4f\n", x2, result);
	}else printf("Значение должно быть больше или равно 0");
	return 0;
}

void f(const double& x, double& result) {
	result = (((x + 2) / (sqrt(2 * x))) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - (sqrt(2))) / (x + 2));
}