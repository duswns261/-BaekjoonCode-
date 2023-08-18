#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int iRecvNum;
    int iNumLen = 0;
    vector<int> vNum;
    
    scanf("%d", &iRecvNum);

    while(1) {
        int iQuotientVal = iRecvNum / 10;
        int iRemainderVal = iRecvNum % 10;
        if (iQuotientVal) {
            vNum.push_back(iRemainderVal);
            iRecvNum = iQuotientVal;
            iNumLen++;
        } else {
            vNum.push_back(iRemainderVal);
            iNumLen++;
            break;
        }
    }
    sort(vNum.rbegin(), vNum.rend());
    for (int i = 0; i < iNumLen; i++)
    {
        printf("%d", vNum[i]);
    }
    return 0;
}