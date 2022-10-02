#include <iostream>
#include <cmath>

int main()
{
    int a, b;
	int c, d, e;
	int f, g, h;
	scanf("%d", &a);
	scanf("%d", &b);
	c = b / 100;
	f = a*c;
	d = b - (c * 100);
	d /= 10;
	g = a*d;
	e = b - (c * 100) - (d * 10);
	h = a*e;
	printf("%d\n", h);
	printf("%d\n", g);
	printf("%d\n", f);
	printf("%d\n", a*b);
	return 0;
}