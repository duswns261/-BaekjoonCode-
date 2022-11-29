#include <iostream>

int main()
{
    int nCaseNum = 0;
    int nStdScore[1000] = {0, };
    int nOkStdCnt = 0, nStdntNum;
    double dScoreSum = 0., dScoreAvg = 0., dRes = 0;
    scanf("%d", &nCaseNum);
    for (int i = 0; i < nCaseNum; i++)
    {
        scanf("%d", &nStdntNum);
        for (int j = 0; j < nStdntNum; j++)
        {
            scanf("%d", &nStdScore[j]);
            dScoreSum += nStdScore[j];
        }
        dScoreAvg = dScoreSum / nStdntNum;
        for (int j = 0; j < nStdntNum; j++)
        {
            if (nStdScore[j] > dScoreAvg) nOkStdCnt++;
        }
        dRes = ((double)nOkStdCnt/(double)nStdntNum)*100;
        printf("%.3f%%\n", dRes);
        dScoreSum = 0;
        nOkStdCnt = 0;
    }
    return 0;
}