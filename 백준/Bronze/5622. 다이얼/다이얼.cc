#include <iostream>
#include "string.h"

int main() {
    char szWord[16];
    int nWordLen, nTimeSum = 0;
    int arrPhoneTime[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7,
                            8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    
    scanf("%s", szWord);
    nWordLen = strlen (szWord);
    
    for (int i = 0; i < nWordLen; i++)
        nTimeSum += arrPhoneTime[szWord[i] - 'A'];
    
    printf("%d", nTimeSum);
    return 0;
}