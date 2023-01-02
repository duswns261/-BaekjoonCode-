#include <iostream>
#include <string.h>

int main()
{
    int nFountainIdx, nUpEdge = 1, nMolecule = 1, nDenominator = 1;
    scanf("%d", &nFountainIdx);
        
    if (nFountainIdx == 1)
    {
        printf("%d/%d", 1, 1);
        return 0;
    }
    for (int i = 2; i <= nFountainIdx; i++)
    {
             if (nMolecule    == 1 && nUpEdge == 1) {nUpEdge = 0; nDenominator++; continue;}
        else if (nDenominator == 1 && nUpEdge == 0) {nUpEdge = 1; nMolecule++;    continue;}
            
        if (!nUpEdge) {nMolecule++; nDenominator--;}
        else          {nMolecule--; nDenominator++;}
    }
    printf("%d/%d", nMolecule, nDenominator);
    
    return 0;
}