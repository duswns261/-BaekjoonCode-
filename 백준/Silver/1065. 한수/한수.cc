#include <iostream>

int ChkHansoo(int nHanNum)
{
	int nTemp, nDiff = 0, nNum = 0;
	int arr[4] = { 0, };
	nTemp = nHanNum;
	while (nTemp > 0)
	{
		if ((nTemp / 10) == 0) break;
		arr[nNum] = nTemp % 10;
		if (nNum == 0)
		{
			nTemp /= 10;
			arr[++nNum] = nTemp % 10;
			nDiff = arr[nNum] - arr[nNum - 1];
		}
		else
		{
			nTemp /= 10;
			arr[++nNum] = nTemp % 10;
			if (nDiff != (arr[nNum] - arr[nNum - 1])) return 0;
		}
	}
	return 1;
}

int main()
{
	int nNum = 0, nRes = 0;
	scanf("%d", &nNum);
	for (int i = 1; i <= nNum; i++)
		nRes += ChkHansoo(i);
	printf("%d", nRes);
	return 0;
}