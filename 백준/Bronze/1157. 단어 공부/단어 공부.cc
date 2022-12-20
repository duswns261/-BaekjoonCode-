#include <iostream>
#include <cctype>
#include "string.h"

int main() {
    // insert code here...
    char arrWord[1000000];
    int nAlpha[26] = {0,};
    int nstrlen, nTemp, nMaxVal = 0, nMaxCnt = 0, nMax = 0;
    
    scanf("%s", arrWord);
    
    nstrlen = strlen(arrWord);
    for (int i = 0; i < nstrlen; i++) arrWord[i] = toupper(arrWord[i]);
    
    for (int i = 0; i < nstrlen; i++)
    {
        nTemp = arrWord[i] - 'A';
        nAlpha[nTemp]++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (nAlpha[i] > nMax)
        {
            nMax = nAlpha[i];
            nMaxVal = i;
            nMaxCnt = 1;
        }
        else if (nAlpha[i] == nMax)
        {
            nMaxCnt++;
        }
    }
    if (nMaxCnt > 1) printf("?");
    else printf("%c\n", nMaxVal + 'A');
    
    
        
    return 0;
}
