#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c;
	a = 0;
	b = 0;
	c = 0;
	printf("vvedite tri chisla \n");
	scanf("%d %d %d", &a, &b, &c);
	if (b > c && b > a)  printf("verno");
	else printf("neverno");
	return 1;
}




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float x, y, z;
	x = 0;
	y = 0;
	z = 0;
	printf("vvedite tri chisla \n");
	scanf("%f %f %f", &x, &y, &z);
	printf("x=%f y=%f z=%f \n", x, y, z);
	if (((x != y) && (y != z) && (x != z)) && ((x + y + z) / 2 > 1)) {
		if (x > z) { z = (x + y) / 2; }
		else { x = (z + y) / 2; }
	}
	else {
		if (x < z && x < y) {
			if (z > y) x = z;
			else x = y;
		}
		if (y < z && y < x) {
			if (x > z) y = x;
			else y = z;
		}
		if (z < x && z < y) {
			if (x > y) z = x;
			else z = y;
		}
	}
	printf("x=%f y=%f z=%f", x, y, z);
	printf("%d %d %d", x, &x, *&x);
	return 1;
}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float a, b, c, d;
	a = b = c = d = 0;
	printf("vvedite 4 chisla \n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	if (a <= 0 && b <= 0) {
		if (c > 0 && d > 0) {
			if (c < d) { c = c / 7; }
			else { d = d / 7; }
		}
		else if (c > 0 && d <= 0) { c = c / 7; }
		else if (d > 0 && c <= 0) { d = d / 7; }
	}
	else {
		if (a < 0 && (a > b && a > c && a > d)) {
			a = a * 4;
		}
		if (b < 0 && (b > a && b > c && b > d)) {
			b = b * 4;
		}
		if (c < 0 && (c > b && c > a && c > d)) {
			c = c * 4;
		}
		if (d < 0 && (d > b && d > c && d > a)) {
			d = d * 4;
		}

	}
	printf("a=%f b=%f c=%f d=%f", a, b, c, d);
	return 1;
}
}