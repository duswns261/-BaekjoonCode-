#include <iostream>
#include <memory.h>
#include <string.h>

int main()
{
    int nArrLength, nArrIndex;
    char arrS[100];
    int arrRes[26];
    
    memset(arrRes, -1, sizeof(arrRes));
    scanf("%s", arrS);
    nArrLength = strlen(arrS);
    
    for (int i = 0; i < nArrLength; i++)
    {
        nArrIndex = arrS[i];
        nArrIndex -= 'a';
        if (arrRes[nArrIndex] <= -1)
            arrRes[nArrIndex] = i;
    }
    
    nArrLength = sizeof(arrRes) / sizeof(int);
    for (int i = 0; i < nArrLength; i++)
        printf("%d ", arrRes[i]);

    return 0;
}