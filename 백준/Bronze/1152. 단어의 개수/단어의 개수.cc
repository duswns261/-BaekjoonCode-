#include <iostream>

int main() {
    std::string strSentence;
    char ChkFlag = ' ';
    getline(std::cin, strSentence);
    
    int nWordCnt = 0;
    long lSentenceLen = strSentence.length();
    
    for (int i = 0; i < lSentenceLen; i++)
    {
        
        if (i == 0 && strSentence[0] == ChkFlag) continue;
        if (strSentence[i] == ChkFlag)
        {
            nWordCnt++;
            if (strSentence[i+1] == ChkFlag) break;
        }
        if (i == (lSentenceLen-1))
            if (strSentence[lSentenceLen-1] != ChkFlag)
                nWordCnt++;
    }
    printf("%d\n", nWordCnt);
    return 0;
}
