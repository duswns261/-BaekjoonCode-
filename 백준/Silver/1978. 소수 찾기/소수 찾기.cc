#include <iostream>

int main()
{
    int nCaseNum, nInput, nRes = 0;
    scanf("%d", &nCaseNum);
    
    for (int i = 0; i < nCaseNum; i++)
    {
        scanf("%d", &nInput);
        if (nInput > 1)
        {
            for (int j = 2; j < nInput; j++)
            {
                if (nInput % j == 0)
                {
                    nRes -= 1;
                    break;
                }
            }
            nRes++;
        }
    }
    printf("%d\n", nRes);
    return 0;
}
