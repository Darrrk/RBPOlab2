#include <iostream>
#include <math.h>
double x, result;
void f();
int main() {
	system("chcp 1251");
	x = 5;
	f();
	printf("�������� ������� ��� ���������� �������� x = %.0lf, ����� %.4f\n",x,result);
	printf("������� �������� ��� x:");
	scanf("%lf", &x);
	if (x>=0) {
		f();
		printf("�������� ������� ��� ���������������� �������� x = %.4lf, ����� %.4f\n", x, result);
	}
	else printf("�������� x ������ ���� ������ 0");
	return 0;
}

void f() {
	result = (((x + 2) / (sqrt(2 * x))) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - (sqrt(2))) / (x + 2));
}