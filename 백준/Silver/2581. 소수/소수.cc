#include <iostream>

int main()
{
    
    int nMin, nMax, nSum = 0, nMinVal = 0;
    
    scanf("%d", &nMin);
    scanf("%d", &nMax);
    
    for (int i = nMin; i <= nMax; i++)
    {
        if (i == 1) continue;
        int nIsNot = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                nIsNot = 1;
            }
        }
        
        if (!nIsNot)
        {
            if (nSum == 0) nMinVal = i;
            nSum+=i;
        }
    }
    if (!nMinVal)
        printf("-1");
    else
        printf("%d\n%d\n", nSum, nMinVal);
    
    return 0;
}
