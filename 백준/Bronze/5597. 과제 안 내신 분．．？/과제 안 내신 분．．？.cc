#include <iostream>

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int nStudentNum;
    int nSucNum[31] = { 0, };
    int nFailNum[2] = { 0, };
    int nFailCnt = 0;
    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &nStudentNum);
        nSucNum[nStudentNum] = 1;
    }
    for (int i = 1; i <= 30; i++)
    {
        if (nSucNum[i] == 0)
        {
            nFailNum[nFailCnt] = i;
            nFailCnt++;
        }
    }
    if (nFailNum[0] > nFailNum[1]) swap(&nFailNum[0], &nFailNum[1]);
    printf("%d\n%d", nFailNum[0], nFailNum[1]);
    return 0;
}