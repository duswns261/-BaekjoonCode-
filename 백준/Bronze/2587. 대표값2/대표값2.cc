#include <iostream>
#include <cstring>
    
int main()
{
    int nArrLen, nMidVal, nCnt = 0, arrNum[5];
    int nSum = 0, nAvg;
    memset(arrNum, 0, sizeof(arrNum));
    
    nArrLen = sizeof(arrNum)/4;
    for (int i = 0; i < nArrLen; i++)
    {
        scanf("%d", arrNum+i);
        nSum += arrNum[i];
        nCnt++;
        for (int j = 0; j < i; j++)
        {
            int nTemp;
            if (arrNum[i] > arrNum[j])
            {
                nTemp     = arrNum[j];
                arrNum[j] = arrNum[i];//이렇게 짜면 안돼! 모든 값이 배열의 모든 원소와 비교해야하나?ㄴ
                arrNum[i] = nTemp;
            }
        }
    }
    nAvg    = nSum/nCnt;
    nMidVal = arrNum[2];
    
    printf("%d\n%d\n", nAvg, nMidVal);
    return 0;
}