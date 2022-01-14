#include <iostream>
#include <math.h>
using namespace std;
int main() {
	system("chcp 1251");
	const int x1 = 5;
	printf("Значение функции при констатном значении x = %d, равна %.4f\n",x1, (((x1 + 2) / (sqrt(2 * x1))) - (x1 / (sqrt(2 * x1) + 2)) + (2 / (x1 - sqrt(2 * x1)))) * ((sqrt(x1) - (sqrt(2))) / (x1 + 2)));
	double x2;
	printf("Введите значение для x");
	scanf("%lf", &x2);
	if (x2>=0){
		printf("Значение функции при пользовательском значении x = %.4lf, равна %.4f\n", x2, (((x2 + 2) / (sqrt(2 * x2))) - (x2 / (sqrt(2 * x2) + 2)) + (2 / (x2 - sqrt(2 * x2)))) * ((sqrt(x2) - (sqrt(2))) / (x2 + 2)));
	}else printf("Значение должно быть больше или равно 0");
	return 0;
}