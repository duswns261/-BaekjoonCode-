#include <iostream>
#include <vector>
#include <algorithm>

int d(int nNum)
{
	int nTemp, n1000 = 0, n100 = 0, n10 = 0, n = 0;
	nTemp = nNum;
	if (nTemp == 10000) return 10001;
	else
	{
		n1000 = nTemp / 1000;
		nTemp = nTemp % 1000;
		n100  = nTemp / 100;
		nTemp = nTemp % 100;
		n10   = nTemp / 10;
		n     = nTemp % 10;
		return nNum + n1000 + n100 + n10 + n;
	}

}

int main()
{
	int nSelfNum = 0, nNumIdx = 0;
	std::vector<int> vNum;
	for (int i = 1; i <= 10000; i++)
	{
		vNum.push_back(i);
	}
	for (int i = 1; i <= 10000; i++)
	{
		nSelfNum = d(i);
		if (find(vNum.begin(), vNum.end(), nSelfNum) == vNum.end()) continue;
		else nNumIdx = find(vNum.begin(), vNum.end(), nSelfNum) - vNum.begin();
		vNum.erase(vNum.begin() + nNumIdx);
	}
	for (int i = 0; i < vNum.size(); i++)
	{
		printf("%d\n", vNum[i]);
	}
	return 0;
}