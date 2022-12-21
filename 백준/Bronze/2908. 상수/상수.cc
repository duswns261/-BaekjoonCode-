#include <iostream>
int main() {
    char szConst[7];
    int nNum1 = 0, nNum2 = 0, nMul = 1;
    int nRes;
    scanf("%[^\n]s", szConst);
    for (int i = 0; i < 3; i++)
    {
        nNum1 += szConst[i] * nMul;
        nNum2 += szConst[i+4] * nMul;
        nMul *= 10;
    }
    if (nNum1 > nNum2) nRes = 0;
    else               nRes = 4;
    
    for (int i = 2; i >= 0; i--) printf("%c", szConst[i+nRes]);
}