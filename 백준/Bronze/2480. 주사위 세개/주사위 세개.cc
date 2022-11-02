#include <stdio.h>

#define max(x, y) (x>y? x : y) 
int main()
{
    int a, b, c, res;
    
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        res = 10000 + (a * 1000);
    else if (a == b || a == c)
        res = 1000 + (a * 100);
    else if (b == c)
        res = 1000 + (b * 100);
    else if (b == c)
        res = 1000 + (b * 100);
    else{ 
        res = max(max(a,b), c) * 100;
    }
    printf("%d", res);
    
        
        
    return 0;
}