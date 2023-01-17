#include <iostream>

int main()
{
    int nNum, nDiv = 2;
    scanf("%d", &nNum);
    if (nNum == 1) return 0;
    while(nNum > 1)
    {
        if ((nNum % nDiv) == 0)
        {
            nNum = nNum/nDiv;
            printf("%d\n", nDiv);
            nDiv = 2;
        }
        else nDiv++;
    }
    return 0;
}