#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int nNum, nElement;
    std::vector<int> vNum;
    
    scanf("%d", &nNum);
    
    for (int i = 0; i < nNum; i++)
    {
        scanf("%d", &nElement);
        vNum.push_back(nElement);
    }
    sort(vNum.begin(), vNum.end());
    for (int i = 0; i < nNum; i++)
    {
        printf("%d\n", vNum[i]);
    }
    
    return 0;
}