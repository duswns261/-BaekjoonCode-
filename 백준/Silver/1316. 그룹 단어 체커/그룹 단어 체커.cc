#include <iostream>
#include <string.h>

int main()
{
    int nWordNum, nGroupNum = 0;
    int nAlpha[26] = {0,};
    char szWordName[101];
    
    scanf("%d", &nWordNum);
    nGroupNum = nWordNum;
    for (int i = 0; i < nWordNum; i++)
    {
        scanf("%s", szWordName);
        int nWordLen = strlen(szWordName);
        for (int j = 0; j < nWordLen; j++)
        {
            if (nAlpha[szWordName[j] - 'a'] == -1) {nGroupNum--; break;}
            if (szWordName[j] != szWordName[j+1]) nAlpha[szWordName[j]-'a'] = -1;
        }
        memset(nAlpha, 0, sizeof(nAlpha));
    }
    printf("%d\n", nGroupNum);
    
    return 0;
}
