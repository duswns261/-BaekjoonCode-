#include <iostream>

int main()
{
    int nCaseNum, nHeight, nWidth, nNum;
    scanf("%d", &nCaseNum);
    for (int i = 0; i < nCaseNum; i++)
    {
        int nTgtRoomNum = 0;
        scanf("%d %d %d", &nHeight, &nWidth, &nNum);
        if (nNum % nHeight == 0)
        {
            nTgtRoomNum += nHeight * 100;
            nTgtRoomNum += nNum/nHeight;
            printf("%d\n", nTgtRoomNum);
        }
        else
        {
            nTgtRoomNum += ((nNum/nHeight) + 1);
            nTgtRoomNum += ((nNum%nHeight) * 100);
            printf("%d\n", nTgtRoomNum);
        }
    }
    return 0;
}