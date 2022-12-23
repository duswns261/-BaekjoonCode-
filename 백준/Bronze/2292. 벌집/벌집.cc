#include <iostream>

int main() {
    int nNum = 0, nSum = 1, nCnt = 1;
    scanf("%d", &nNum);
    while(1)
    {
        if (nNum <= nSum) break;
        nSum += (nCnt * 6);
        nCnt++;
    }
    printf("%d\n", nCnt);
}