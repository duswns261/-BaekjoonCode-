#include <iostream>
#include <vector>

int main()
{
	int nExamNum, nExamScore, nMaxScore = 0;
	double dRes, dSum = 0;
	std::vector<int> vExamScore;
	scanf("%d", &nExamNum);
	for (int i = 0; i < nExamNum; i++)
	{
		scanf("%d", &nExamScore);
		vExamScore.push_back(nExamScore);
		if (nMaxScore < nExamScore) nMaxScore = nExamScore;
        dSum += nExamScore;
	}
    dRes = ((dSum / (double)nMaxScore) * 100) / vExamScore.size();
	printf("%f", dRes);
	return 0;
}