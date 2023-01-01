#include <iostream>
#include <string.h>

int main()
{
    char szSentence[101];
    int nSenLen, nWordCnt;
    
    scanf("%s", szSentence);
    nSenLen  = strlen(szSentence);
    nWordCnt = strlen(szSentence);
    
    for(int i = 0; i < nSenLen; i++)
    {
        if ((szSentence[i] == 'l' || szSentence[i] == 'n') && szSentence[i+1] == 'j')
            nWordCnt--;
        if (szSentence[i] == 'd' && szSentence[i+1] == 'z' && szSentence[i+2] == '=')
            nWordCnt--;
        if (szSentence[i] == '-' || szSentence[i] == '=')
            nWordCnt--;
    }
    printf("%d\n", nWordCnt);
    return 0;
}
