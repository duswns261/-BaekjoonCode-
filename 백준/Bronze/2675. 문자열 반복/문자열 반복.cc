#include <iostream>
#include <string.h>
int main()
{
    int nCaseNum, nTestCase;
    char arrS[20];
    scanf("%d", &nCaseNum);
    for (int i = 0; i < nCaseNum; i++)
    {
        scanf("%d", &nTestCase);
        scanf("%s", arrS);
        for (int i = 0; i < strlen(arrS); i++)
        {
            for (int j = 0; j < nTestCase; j++)
                printf("%c", arrS[i]);
        }
        printf("\n");
    }
    return 0;
}