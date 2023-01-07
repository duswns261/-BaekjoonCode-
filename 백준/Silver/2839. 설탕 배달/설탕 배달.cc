#include <iostream>

int main()
{
    int nOrder, nRemain, nCnt = 0;
    scanf("%d", &nOrder);
    
    while(nOrder > 0)
    {
        if ((nOrder % 5) == 0)
        {
            nCnt += (nOrder / 5);
            break;
        }
        else
        {
            nOrder -= 3;
            nCnt++;
        }
        
        if (nOrder  < 0)
        {
            nCnt = -1;
            break;
        }
    }
    
    printf("%d", nCnt);
    
    return 0;
}