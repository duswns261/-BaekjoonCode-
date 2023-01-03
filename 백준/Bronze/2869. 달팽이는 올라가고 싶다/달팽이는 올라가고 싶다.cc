#include <iostream>

int main()
{
    int nUpMiter, nDnMiter, nTgtMiter, nDay;
    scanf("%d %d %d", &nUpMiter, &nDnMiter, &nTgtMiter);
    
    nDay = (nTgtMiter - nDnMiter - 1)/(nUpMiter - nDnMiter) +1;
    
    printf("%d\n", nDay);
    
    return 0;
}