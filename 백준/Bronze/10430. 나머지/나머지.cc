#include <iostream>

int main()
{
    int a, b, c, res;
    scanf("%d %d %d", &a, &b, &c);
    res = (a+b)%c;
    printf("%d\n", res);
    res = ((a%c)+(b%c))%c;
    printf("%d\n", res);
    res = (a*b)%c;
    printf("%d\n", res);
    res = ((a%c)*(b%c))%c;
    printf("%d\n", res);
    return 0;
}