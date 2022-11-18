#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int nCnt, nNum;
    std::vector<int> vA;
    scanf("%d", &nCnt);
    for (int i = 0; i < nCnt; i++)
    {
        scanf("%d ", &nNum);
        vA.push_back(nNum);
    }
    printf("%d %d", *min_element(vA.begin(), vA.end()), 
           *max_element(vA.begin(), vA.end()));
    return 0;
}