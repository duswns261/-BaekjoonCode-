#include <iostream>

int main()
{
    int narrNum[10] = { 0, };
    int nNum, nRes = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nNum);
        narrNum[i] = nNum % 42;
    }
    int nCnt;
    for (int i = 0; i < 10; i++)
    {
        nCnt = 0;
        for (int j = i + 1; j < 10; j++)
        {
            if (narrNum[i] == narrNum[j]) nCnt++;
        }
        if (nCnt == 0) nRes++;
    }
    printf("%d", nRes);
    return 0;
}