#include <iostream>

int main()
{
    long long llFixedCost, llVariableCost, llPrice;
    long long llRevenue = 0, llSalesCnt = 0;
    scanf("%lld %lld %lld", &llFixedCost, &llVariableCost, &llPrice); 
    if (llPrice <= llVariableCost)
    {
        printf("%d", -1);
        return 0;
    }
    llSalesCnt = llFixedCost/(llPrice-llVariableCost) + 1;
    printf("%lld", llSalesCnt);
    return 0;
}