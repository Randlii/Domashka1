#include <iostream>

int main() {
   	setlocale(LC_ALL, "Rus");
   	double a, b, c,a1,b1,c1,x,y;
   	printf("Введите коэффициенты a,b,c первого уравнения:\n");
   	scanf("%lf %lf %lf", &a, &b, &c);
   	printf("Введите коэффициенты a,b,c второго уравнения:\n");
   	scanf("%lf %lf %lf", &a1, &b1, &c1);
   	if (((a == 0)&&(b == 0)) || (a1 ==0 && b1 == 0)) {
         	printf("Введите корректные координаты прямой");
         	return 0;
   	}
   	if (a * b1 == b * a1 && c == c1) {
         	printf("МНОГО");
   	}
   	if ((a * b1 - a1 * b) != 0) {
         	y = (c * a1 - a * c1) / (a * b1 - a1 * b);
         	x = (b1*c-c1*b) / (-a * b1 + a1 * b);
         	printf("пересекаются в : (%.3lf , %.3lf)", x, y);
   	}
   	if (a * b1 == b * a1 && c != c1) {
         	printf("НЕТ");
   	}
   	return 0;
}
